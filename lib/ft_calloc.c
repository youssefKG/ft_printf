#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
  char *result;
  size_t i;

  // if (size == 0 || nmemb == 0)
  //   return result;
  result = malloc(size * nmemb);
  if (!result) 
    return NULL;
  i = 0;
  while (i < nmemb * size) {
    result[i] = 0;
    i++;
  }
  return (result);
}
