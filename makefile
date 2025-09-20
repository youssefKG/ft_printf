CC = gcc
CFLAGS = -Wall -Werror -Wextra

AR = ar rsc

NAME = ./exec

SRC = ft_printf.c  ft_puthexa.c ./ft_puti.c ./ft_putaddr.c ./ft_putnbr.c ./ft_putstr.c

OBJ = $(SRC:%.c=%.o)

LIBFT_DIR = ./lib
LIBFT = $(LIBFT_DIR)/libft.a

$(NAME): $(OBJ)
	@make all -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJ) -L. -lft -o $(NAME)

%.o: %c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) clean

re: fclean all

clean: 
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
	@make fclean clean  -C $(LIBFT_DIR)
