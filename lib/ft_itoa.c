#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_len(int n) {
  int len = 0;
  if (n == 0)
    len++;
  if (n < 0)
    len++;
  while (n != 0) {
    n /= 10;
    len++;
  }
  return len;
}

char *ft_itoa(int n) {
  int len;
  char *result;
  int i;
  long num;

  num = n;
  if (n == 0) 
    return ft_strdup("0");
  len = ft_len(n);
  result = (char *)malloc(sizeof(char) * (len + 1));
  if (!result)
    return NULL;
  i = 0;
  if (num < 0) {
    result[i] = '-';
    num = -num;
  }
  result[len] = '\0';
  while (num > 0) {
    result[--len] = (num % 10) + '0';
    num /= 10;
    i++;
  }
  return result;
}
