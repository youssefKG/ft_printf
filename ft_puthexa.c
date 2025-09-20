#include "./lib/libft.h"
#include  <stdio.h>

int ft_puthexa_upp_low(int n, char *hex) {
  int count = 0;
  if (n >= 16) 
    count += ft_puthexa_upp_low(n / 16, hex);
  ft_putchar_fd(hex[n % 16], 1);
  return count + 1;
}


int ft_puthexa(int n, int format) {
  if (format == 'x')
    return ft_puthexa_upp_low(n, "0123456789abcdef");
  return ft_puthexa_upp_low(n, "0123456789ABCDEF");
}
