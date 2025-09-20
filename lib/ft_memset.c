#include "libft.h"

void *ft_memset(void *s, int c, size_t n) {
  char *temp_ptr;

  temp_ptr = (char *)s;
  while (n > 0) {
    *(temp_ptr++) = (char) c;
    n--;
  }
  return s;
}
