#include "libft.h"
#include <stdlib.h>


int ft_count_set(const char *s, const char *set) {
  int count;
  size_t set_len;
  size_t s_len;
  size_t i;

  count = 0;
  s_len = ft_strlen(s);
  set_len = ft_strlen(set);
  i = 0;
  while (s[i] && i < s_len) {
    if (ft_strncmp(s + i, set, set_len) == 0) {
      count++;
      i += set_len;
    } else 
      i++;
  }
  return count;
}

char *ft_strtrim_sub(const char *s1, const char *set) {
  char *result;
  size_t set_len;
  size_t s1_len;
  size_t i;
  int j;
  int count_set;

  if (!s1 || !set) 
    return NULL;
  i = 0;
  j = 0;
  set_len = ft_strlen(set);
  s1_len = ft_strlen(s1);
  count_set = ft_count_set(s1, set);
  result = (char *)malloc(sizeof(char) * (s1_len - (count_set * set_len) + 1));
  if (!result) 
    return NULL;
  while (s1[i] && i < s1_len) {
    if (ft_strncmp(s1 + i, set, set_len) == 0)
      i +=  set_len;
    else 
      result[j++] = s1[i++];
  }
  result[j] = '\0';
  return result;
}
