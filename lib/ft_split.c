#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_count_words(const char *s, int c) {
  int count;
  int i;
  int in_word;
  i = 0;
  in_word = 1;
  count = 0;
  while (s[i]) {
    if (s[i] == c) 
      in_word = 1;
    else {
      if (in_word)
        count++;
      in_word = 0;
    }
    i++;
  }
  return count;
}

char *ft_get_word(const char *s, int c) {
  int len;
  char *word;
  len = 0;
  while (s[len] && s[len] != c)
    len++;
  word = (char *)malloc(sizeof(char) * (len + 1));
  if (!word) 
    return NULL;
  ft_memcpy(word, s, len);
  word[len] = '\0';
  return word;
}


char **ft_split(char const *s, int c) {
  char **result;
  int count;
  int i;
  int j;
  if (!s)
    return NULL;
  count = ft_count_words(s, c);
  printf("%d \n", count);
  result = (char **)malloc(sizeof(char *) + (count + 1));
  if (!result)
    return NULL;

  i = 0;
  j = 0;
  while (i < count) {
    while (s[j] == c) j++;
    result[i] = ft_get_word(s + j, c);
    while(s[j] != c)
      j++;
    i++;
  }
  result[count] = NULL;
  return result;
}

