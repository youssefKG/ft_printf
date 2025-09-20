#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) 
{
  char *dest_ptr;
  const char *src_ptr;
  size_t   i;

  dest_ptr = dest;
  src_ptr = src;

  if (src_ptr < dest_ptr) {
    while (n > 0) {
      dest_ptr[n - 1] = src_ptr[n - 1];
      n--;
    }
  } 
  else {
    i = 0;
    while (i < n) {
      dest_ptr[i] = src_ptr[i];
      i++;
    }
  }
  return dest;
}
