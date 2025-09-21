#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"
#include "./lib/libft.h"



int ft_print_arg(char format, va_list args) {
  if (format == 's') 
   return ft_putstr(va_arg(args, char *));
  if (format == 'd' || format == 'i') 
    return ft_putnbr(va_arg(args, int));
  if (format == '%') 
    return ft_putchar('%');
  if (format == 'x' || format == 'X')
     return ft_puthexa(va_arg(args, long), format);
  if (format == 'c')
    return ft_putchar(va_arg(args, int));
  if (format == 'u')
    return ft_putunsigned(va_arg(args,unsigned int));
  if (format == 'p') 
    return ft_putaddr(va_arg(args, void *));
  return 0;
}

int ft_printf(char *s, ...) {
  va_list args;
  int size = 0;
  int i;
  va_start(args, s);
  i = 0;
  while (s[i]) {
    if (s[i] == '%') 
      size += ft_print_arg(s[++i], args);
    else
    {
      ft_putchar_fd(s[i], 1);
      size++;
    }
    i++;
  }
  va_end(args);
  return size;
}
