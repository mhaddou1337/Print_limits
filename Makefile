CC = gcc

SRC_DIR = src
LIB_DIR = libraries
PRLI_DIR = prli_files

SRC_FILES = $(SRC_DIR)/ft_strcmp.c print_limits.c
OBJ_FILES = $(SRC_DIR)/ft_strcmp.o print_limits.o
HEADER_FILES = $(LIB_DIR)/libraries.h

TARGET = print_limits

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CC) -o $(TARGET) $(OBJ_FILES)
	@rm -f $(OBJ_FILES) print_limits.o


$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER_FILES)
	$(CC) -c $< -o $@

print_limits.o: print_limits.c $(HEADER_FILES)
	$(CC) -c print_limits.c -o print_limits.o

clean:
	rm -f $(OBJ_FILES) print_limits.o $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
