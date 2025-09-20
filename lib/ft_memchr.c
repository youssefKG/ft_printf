#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
  char *s_ptr;
  size_t i;

  if (!s || n == 0) 
    return NULL;
  i = 0;
  s_ptr = (char *)s;
  while (i < n && s_ptr[i] != c) 
    i++;
  if (s_ptr[i] == c) 
    return s_ptr + i;
  return NULL;
}
