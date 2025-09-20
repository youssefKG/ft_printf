#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
  size_t i;
  char *s1_ptr;
  char *s2_ptr;

  s1_ptr = (char *)s1;
  s2_ptr = (char *)s2;
  if (n == 0) 
    return 0;
  i = 0;
  while (i < n - 1  && s1_ptr[i] == s2_ptr[i]) 
    i++;
  return s1_ptr[i] - s2_ptr[i];
}

