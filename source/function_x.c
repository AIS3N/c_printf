/*
* Created by AIS3N
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../header/my_printf.h"

char   *array_hexa()
{
    char    *tab;

    tab = "bcdefsssssabcdef";
    return (tab);
}

char   *array_hexa2()
{
    char    *tab;

    tab = "bcdefsssssABCDEF";
    return (tab);
}

void    display_array(char *tab)
{
    char    *tab_hexa;
    int     n;
    int     a;

    n = 0;
    a = 0;
    tab_hexa = array_hexa();
    while (tab[n] != '\0')
        n++;
    n = n - 1;
    while (n >= 0)
    {
        a = tab[n];
        if (tab[n] < 10)
            my_put_nbr(tab[n]);
        else
            my_putchar(tab_hexa[a]);
        n--;
    }
}

void    display_array2(char *tab)
{
    char    *tab_hexa;
    int     n;
    int     a;

    n = 0;
    a = 0;
    tab_hexa = array_hexa2();
    while (tab[n] != '\0')
    {
        n++;
    }
    n = n - 1;
    while (n >= 0)
    {
        a = tab[n];
        if (tab[n] < 10)
            my_put_nbr(tab[n]);
        else
            my_putchar(tab_hexa[a]);
        n--;
    }
}

void     my_print_u(va_list *ap)
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
        tmp[i] = u % 10;
        u = u / 10;
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
