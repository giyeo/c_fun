# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source, object, and library files
SRC = ft_itoa.c
OBJ = $(SRC:.c=.o)
LIB = libft.a

# Default target: build the static library
all: $(LIB)

# Create the static library
$(LIB): $(OBJ)
	ar rcs $(LIB) $(OBJ)

# Compile the object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJ)

# Clean up everything (object files and the library)
fclean: clean
	rm -f $(LIB)

# Rebuild everything
re: fclean all

