#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n) {
  size_t src_len;
  size_t i;

  src_len = ft_strlen((char*)src);
  if (n == 0) 
    return src_len;
  i = 0;
  while (i < n - 1 && src[i]) {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return src_len;
}

