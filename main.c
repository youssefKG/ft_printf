#include "ft_printf.h"
#include "./lib/libft.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int ret1, ret2;
    char c = 'Z';
    char *str = "Complex String Test";
    char *null_str = NULL;
    int i = -123;
    unsigned int u = 4294967295;
    void *ptr = &i;
    void *null_ptr = NULL;

    printf("----- ORIGINAL printf -----\n");
    ret1 = printf("char=%c, string=%s, null_str=%s, int=%d, unsigned=%u, hex=%x/%X, ptr=%p, null_ptr=%p, percent=%%\n",
                  c, str, null_str, i, u, i, i, ptr, null_ptr);
    printf("printf return=%d\n", ret1);

    printf("----- YOUR ft_printf -----\n");
    ret2 = ft_printf("char=%c, string=%s, null_str=%s, int=%d, unsigned=%u, hex=%x/%X, ptr=%p, null_ptr=%p, percent=%%\n",
                     c, str, null_str, i, u, i, i, ptr, null_ptr);
    printf("ft_printf return=%d\n", ret2);

    return 0;
}
