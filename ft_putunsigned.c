#include "./lib/libft.h"

int ft_putunsigned(unsigned int n) {
  int size = 0;
  if (n >= 10) 
    size += ft_putunsigned(n / 10);
  ft_putchar_fd((n % 10) + '0', 1);
  return size + 1;
}
