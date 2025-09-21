#include "./lib/libft.h"

int ft_putchar(int n)  {
  ft_putchar_fd((char)n, 1);
  return 1;
}
