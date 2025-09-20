#include "libft.h"

char *ft_strchr(const char *str, int c) {
  int i;

  if (!str)
    return 0;
  i = 0;
  while (str[i])
  {
    if (str[i] == (char)c) 
      return (char *) (str + i);
    i++;
  }
  if (str[i] == (char)c) 
    return (char *)(str + i);
  return 0;
}
