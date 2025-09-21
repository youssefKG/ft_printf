#include "./lib/libft.h"


int ft_putstr(char *s) {
  if (!s)
    return write(1, "(null)", 6);
  ft_putstr_fd(s, 1);
  return ft_strlen(s);
}
