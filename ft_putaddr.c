#include "./lib/libft.h"
#include "ft_printf.h"
#include <unistd.h>

int ft_puthexal(unsigned long l) {
  int count;
  count = 0;

  if (l >= 16) 
    count += ft_puthexal(l / 16);
  ft_putchar_fd("0123456789abcdef"[l % 16], 1);
  return (count + 1);
}

int ft_putaddr(void * add) {
  unsigned long l; 
  int size = 0;

  l = (unsigned long)add;
  size += write(1, "0x", 2);
  size+= ft_puthexal(l);
  return size;
}
