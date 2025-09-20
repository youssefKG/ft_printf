#include <stdlib.h>
#include "./lib/libft.h"

int ft_putnbr(int n) {
  char *ns;
  int size;

  ns = ft_itoa(n);
  size = ft_strlen(ns);
  ft_putstr_fd(ns, 1);
  free(ns);
  return size;
}
