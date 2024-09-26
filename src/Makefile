CC = cc 

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c\
      ft_isdigit.c ft_isprint.c ft_strlcpy.c\
	  ft_strlen.c ft_atoi.c\


OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c 
	@$(CC) $(CFLAGS) -c $< -o $@

clean: 
	@rm -f $(OBJ) $(NAME) 

fclean: clean
	@rm -f $(NAME)

re: fclean all
