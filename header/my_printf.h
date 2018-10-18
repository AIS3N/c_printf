#ifndef SMAJOV_D_MY_PRINTF_H
#define SMAJOV_D_MY_PRINTF_H

void    my_putchar(char c);
int	    my_strcmp(char *s1, char *s2);
void	my_put_nbr(int  n);
void	my_putstr(char *str);
void    my_printf_i(va_list *ap);
void    my_printf_s(va_list *ap);
void    my_printf_c(va_list *ap);
void    my_print_o(va_list *ap);
void    my_print_x(va_list *ap);
void    my_print_X(va_list *ap);
void    my_print_(va_list *ap);
void     my_print_u(va_list *ap);
void     my_print_z(va_list *ap);

#endif
