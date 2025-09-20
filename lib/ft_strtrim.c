#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(const char *s1, const char *set) {
  int start;
  int end;
  int len;
  char  *result;

  if (!s1 || !set)
    return NULL;
  start = 0;
  while(s1[start] && ft_strchr(set, s1[start]))
    start++;
  end = ft_strlen(s1) - 1;
  while (end > start && ft_strchr(set, s1[end]))
    end--;
  if (start >= end)
    return (ft_strdup(""));
  len = end - start + 1;
  result = (char *)malloc(sizeof(char) * (len + 1));
  if (!result)
    return NULL;
  ft_memcpy(result, s1 + start, len);
  result[len] = '\0';
  return result;
}
