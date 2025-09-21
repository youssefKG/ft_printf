CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rsc

NAME = ./ft_print.a
SRC = ft_printf.c  ft_puthexa.c ./ft_putunsigned.c ./ft_putaddr.c ./ft_putnbr.c ./ft_putstr.c ./ft_putchar.c
OBJ = $(SRC:%.c=%.o)

LIBFT_DIR = ./lib
LIBFT = libft.a

$(NAME): $(OBJ)
	@make all -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/$(LIBFT) . 
	$(AR) $(NAME) $(OBJ) 

%.o: %c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) 

clean: 
	rm -rf $(OBJ)
	@make clean -C $(LIBFT_DIR)

fclean: clean
	rm -rf $(NAME)
	rm $(LIBFT)
	@make fclean -C $(LIBFT_DIR)

re: fclean all
