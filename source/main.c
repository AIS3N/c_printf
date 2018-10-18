/*
* Created by AIS3N
*/

#include <stdarg.h>
#include "../header/my_printf.h"
#include "../header/pointer_func.h"

void         my_printf(const char* arg, ...)
{
    va_list ap;
    int i;
    int n;

    i = 0;
    va_start(ap, arg);
    while (arg[i] != '\0') {
        n = 0;
        if (arg[i] == '%') {
            while (n < 10) {
                if (arg[i + 1] == function[n].name) {
                    function[n].fonction(&ap);
                    i = i + 2;
                    n = 10;
                }
                n++;
            }
        }
        else {
            my_putchar(arg[i]);
            i++;
        }
    }
    va_end(ap);
}
