#include "libft.h"

char *strrchar(const char *str, int c) {
  int last_occurence = -1;
  int i;

  if (!str)
    return NULL;
  i = 0;
  while (str[i]) {
    if (str[i] == c) 
      last_occurence = i;
    i++;
  }
  if (c == '\0') 
    return (char *)(str + i);
  if (last_occurence == -1)
    return NULL;
  return (char *)(str + last_occurence);
}
