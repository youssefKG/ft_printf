#include "libft.h"
#include <stdlib.h>

int ft_count_trim_chrs(const char *s, const char * set) {
  int count;
  int i;
  count = 0;
  i = 0;

  while (s[i]) {
    if (ft_strchr(set, s[i]) != NULL)
      count++;
    i++;
  }
  return count;
}

char *ft_strremove(const char *s1, const char *set) {
  size_t s1_len;
  char *result;
  int count_trim_chrs;
  int j;
  int i;

  if (!s1 || !set) 
    return NULL;
  s1_len = ft_strlen(s1);
  count_trim_chrs = ft_count_trim_chrs(s1, set);
  result = (char *)malloc(sizeof(char) * (s1_len - count_trim_chrs + 1));
  if (!result) 
    return NULL;
  i = 0;
  j = 0;
  while (s1[i]) {
    if (ft_strchr(set, s1[i]) == NULL) {
      result[j] = s1[i];
      j++;
    }
    i++;
  }
  result[j] = '\0';
  return result;
}
