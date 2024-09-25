CC = cc 
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
#EXEC = a.out
#LIB = libft.h

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c\
      ft_isdigit.c ft_isprint.c ft_strlcpy.c\
	  ft_strlen.c\

#MAIN = main.c

OBJ = $(SRC:.c=.o)
#MAIN_O = $(MAIN:.c=.o)

all: $(NAME) #$(EXEC) 

$(EXEC): $(MAIN_O) $(NAME)
	$(CC) $(CFLAGS) -I. $(MAIN_O) -L. -lft -o $(EXEC)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c $(LIB)
	@$(CC) $(CFLAGS) -c $< -o $@

clean: 
	@rm -f $(OBJ) $(MAIN_O) $(EXEC) $(NAME) 

fclean: clean
	@rm -f $(NAME)

re: fclean all
