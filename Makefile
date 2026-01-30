CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = main

.PHONY: all clean

all:
	@echo "Usage: make <number>"
	@echo "Example: 'make 1' will find folder 'Lab01_...' and compile it."

clean:
	@echo "Cleaning up..."
	rm -f $(TARGET)
	rm -f */$(TARGET)

%:
	@# 1. Format the input number to 2 digits (e.g., 1 becomes 01)
	@NUM=$$(printf "%02d" "$@" 2>/dev/null); \
	if [ $$? -ne 0 ]; then \
		echo "Error: Please provide a valid number (e.g., make 1)"; \
		exit 1; \
	fi; \
	\
	# 2. Find folder starting with LabXX_
	FOLDER=$$(ls -d Lab$${NUM}_*/ 2>/dev/null | head -n 1); \
	if [ -z "$$FOLDER" ]; then \
		echo "Error: No folder found starting with 'Lab$${NUM}_'"; \
		exit 1; \
	fi; \
	\
	# 3. Find the .c file
	SRC=$$(find $$FOLDER -maxdepth 1 -name "*.c" | head -n 1); \
	if [ -z "$$SRC" ]; then \
		echo "Error: No .c file found in $$FOLDER"; \
		exit 1; \
	fi; \
	\
	echo "Compiling $$SRC..."; \
	$(CC) $(CFLAGS) "$$SRC" -o $(TARGET) -lm