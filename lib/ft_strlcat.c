#include <stdio.h>
#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dsize) {
  size_t  src_len;
  size_t  dest_len;
  size_t j;

  const char *dest_ptr = dest;
  src_len = ft_strlen(src);
  dest_len = ft_strlen(dest_ptr);

  if(dsize <= dest_len || dsize == 0) 
    return src_len + dsize;
  j = 0;
  while(src[j] && j < dsize - dest_len - 1) {
    dest[dest_len + j] = src[j];
    j++;
  }
  dest[j + dest_len] = '\0';
  return dest_len + src_len;
}
