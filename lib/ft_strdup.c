#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *str) {
  size_t str_len;
  char *result;

  if (!str)
    return 0;
  str_len = ft_strlen(str);
  result = (char *)malloc(sizeof(char) * (str_len + 1));
  if (!result)
    return 0;
  ft_memcpy(result, str, str_len + 1);
  return result;
}
