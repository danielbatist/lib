CC = cc 
CFLAGS = -Wall -Wextra -Werror
INC = -I./include
SRC = ./src
BIN = ./bin
OBJ = ./obj
LIBESTATIC = libft.a
ALVO_EXE = $(BIN)

LIB = $(wildcard $(SRC)/*.c)
LIB_OBJ = $(LIB:$(SRC)/%.c=$(OBJ)/%.o)
