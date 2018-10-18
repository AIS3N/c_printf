/*
* Created by AIS3N
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../header/my_printf.h"
#include "../header/function_x.h"

void    my_print_X(va_list *ap)
{
    int     o;
    int     i;
    char    *tmp;

    o = va_arg(*ap, int);
    tmp = malloc(sizeof(int));
    i = 0;
    while (o > 0)
    {
        tmp[i] = o % 16;
        o = o / 16;
        i++;
    }
    tmp[i] = '\0';
    display_array2(tmp);
    free(tmp);
}


void    my_print_x(va_list *ap)
{
    int     o;
    int     i;
    char    *tmp;

    o = va_arg(*ap, int);
    tmp = malloc(sizeof(int));
    i = 0;
    while (o > 0)
    {
        tmp[i] = o % 16;
        o = o / 16;
        i++;
    }
    tmp[i] = '\0';
    display_array(tmp);
    free(tmp);
}

void     my_print_z(va_list *ap)
{
    int     u;
    int     i;
    int     n;
    char    *tmp;

    u = va_arg(*ap, int);
    tmp = malloc(sizeof(int));
    i = 0;
    n = 0;
    while (u > 0)
    {
        tmp[i] = u % 2;
        u = u / 2;
        i++;
    }
    tmp[i] = '\0';
    n = i - 1;
    while (n >= 0)
    {
        my_put_nbr(tmp[n]);
        n--;
    }
    free(tmp);
}
