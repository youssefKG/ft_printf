#include "./lib/libft.h"

void ft_puti(unsigned int n) {
  if (n >= 10) 
    ft_puti(n / 10);
  ft_putchar_fd((n % 10) + '0', 1);
}
