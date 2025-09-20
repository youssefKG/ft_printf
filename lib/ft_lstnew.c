#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content) {
  t_list *newlst;

  newlst = (t_list *)malloc(sizeof(t_list));
  if (!newlst)
    return NULL;
  newlst->content = content;
  newlst->next = NULL;
  return newlst;
}

