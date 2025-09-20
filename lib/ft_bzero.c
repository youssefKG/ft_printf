#include "libft.h"

void ft_bzero(void *s, size_t n) {
  char *temp_ptr;

  temp_ptr = (char *) s;
  while (n > 0) {
    *(temp_ptr++) = '\0';
    n--;
  }
}
