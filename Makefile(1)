NAME = minishell
CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
DBUG = -g
EFENCE = -lefence
LIBS = libft/libft.a

SRC =	sources/main.c\
		sources/parse/tokenization.c\
		sources/parse/utils_token.c\
		sources/parse/utils_token_two.c\
		sources/parse/parse.c\
		sources/parse/utils_parse.c\
		sources/parse/index.c\
		sources/parse/check_errors.c\
		sources/parse/utils_errors.c\
		sources/parse/check_values.c\
		sources/parse/free.c\
		sources/parse/nodes.c\
		sources/execute/environ.c\
		sources/builtins/builtins.c\
		sources/builtins/exit.c\
		sources/builtins/exit_utils.c\
		sources/builtins/env_var.c\
		sources/builtins/export.c\
		sources/builtins/export_utils.c\
		sources/builtins/unset.c\
		sources/builtins/cd.c\
		sources/builtins/cd_utils.c\
		sources/builtins/pwd.c\
		sources/builtins/echo.c\
		sources/execute/signals.c\
		sources/execute/handle_heredoc.c\
		sources/execute/expansion.c\
		sources/execute/execute.c\
		sources/execute/utils_print_error.c\
		sources/execute/utils_execute.c\
		sources/execute/utils_execute_two.c\
		sources/execute/utils_execute_three.c\
		sources/execute/pipe.c\
		sources/execute/redirects.c\
		sources/execute/utils_redirect.c\

OBJ = $(SRC:.c=.o)

Reset = \033[0m
G = \033[32m
R = \033[31m
Y = \033[33m
blink = \033[6;7;1;3m

all: $(NAME)

debug: CFLAGS += $(DBUG)
debug: $(NAME)

efence: CFLAGS += $(DBUG)
efence: LIBS += $(EFENCE)
efence: $(NAME)

$(NAME): $(OBJ)
	@echo "-----------------------Compilation of $(NAME)----------------------------------------"
	@make bonus -s -C libft/
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBS) -lreadline
	@echo "-------------------------------------------------------------------------------------"
	@echo "$(blink)$(G) ✅ $(NAME) successfully compiled $(Reset)"

val: re
	valgrind --show-leak-kinds=all --leak-check=full --track-origins=yes --suppressions=supressions.supp -s ./minishell

clean:
	@make -s clean -C libft/
	$(RM) $(OBJ)
	@echo "$(Y) 😉 Objects from the $(NAME) project have been removed $(Reset)"

fclean: clean
	@echo "-------------------------------------------------------------------------------------"
	@make -s fclean -C libft/
	$(RM) $(NAME)
	@$(RM) $(LIBFT)
	@echo "$(blink)$(R) ❌ removed $(NAME) executable $(Reset)"
	@echo "-------------------------------------------------------------------------------------"


re: fclean all

.PHONY: all clean fclean re
