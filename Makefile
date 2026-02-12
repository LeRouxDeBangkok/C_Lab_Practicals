CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = main

.PHONY: all clean

all:
	@echo "Usage: make <number>"
	@echo "Example: 'make 1' to compile the folder starting with Lab01."

clean:
	@echo "Cleaning up..."
	rm -f $(TARGET)
	rm -f */$(TARGET)

%:
	@FOLDER=$$(ls -d Lab0$@_* Lab$@_* 2>/dev/null | head -n 1); \
	if [ -z "$$FOLDER" ]; then \
		echo "Error: No folder found for Lab0$@_ or Lab$@_"; \
		exit 1; \
	fi; \
	\
	SRC=$$(find $$FOLDER -maxdepth 1 -name "*.c" | head -n 1); \
	if [ -z "$$SRC" ]; then \
		echo "Error: No .c file found in $$FOLDER"; \
		exit 1; \
	fi; \
	\
	echo "Compiling $$SRC..."; \
	$(CC) $(CFLAGS) "$$SRC" -o $(TARGET) -lm