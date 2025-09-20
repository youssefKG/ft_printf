#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
  size_t s_len;
  char *result;
  unsigned int i;

  if (!s || !f)
    return NULL;
  s_len = ft_strlen(s);
  result = (char *)malloc(sizeof(char) * (s_len + 1));
  if (!result)
    return NULL;
  i = 0;
  while (s[i]){
    result[i] = f(i, s[i]);
    i++;
  }
  result[i] = '\0';
  return result;
}
