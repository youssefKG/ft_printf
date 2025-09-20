#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"
#include "./lib/libft.h"


int ft_is_supported_format(char c);

int ft_is_supported_format(char c) {
  if (c == 's' || c == 'd' || c == '%' || c == 'x' || c == 'c')
    return 1;
  return 0;
}

int ft_print_arg(char format, va_list args) {
  if (format == 's') 
   return ft_putstr(va_arg(args, char *));
  if (format == 'd') 
    return ft_putnbr(va_arg(args, int));
  else if (format == '%') {
    ft_putchar_fd('%', 1);
    return 1;
  }
  else if (format == 'x' || format == 'X')
     return ft_puthexa(va_arg(args, int), format);
  else if (format == 'c')
    ft_putchar_fd(va_arg(args, int), 1);
  else if (format == 'i')
    ft_puti(va_arg(args, int));
  else if (format == 'p') 
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
    if (s[i] == '%') {
      size += ft_print_arg(s[i + 1], args);
      i++;
    }else  {
      ft_putchar_fd(s[i], 1);
      size++;
    }
     i++;
  }
  va_end(args);
  return size;
}

int main() {
  int c;
  int writtenByte = ft_printf( "TEST: my printf %c %p\n", 'c', &c);
  ft_putnbr_fd(writtenByte, 1);
  ft_putchar_fd('\n', 1);
  fflush(stdout);
  printf("\n%p", &c);

}
