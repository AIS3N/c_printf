/*
* Created by AIS3N
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../header/my_printf.h"

void     my_print_o(va_list *ap)
{
    int     o;
    int     i;
    int     n;
    char    *tmp;

    o = va_arg(*ap, int);
    tmp = malloc(sizeof(int));
    i = 0;
    n = 0;
    while (o > 0)
    {
        tmp[i] = o % 8;
        o = o / 8;
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

void    my_printf_i(va_list *ap)
{
    int a;

    a = va_arg(*ap, int);
    my_put_nbr(a);
}

void    my_printf_c(va_list *ap)
{
    char c;

    c = va_arg(*ap, int);
    my_putchar(c);
}

void     my_printf_s(va_list *ap)
{
    char *s;

    s = va_arg(*ap, char *);
    my_putstr(s);
}

void    my_print_(va_list *ap)
{
    my_putchar('%');
}
