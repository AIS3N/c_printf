#ifndef SMAJOV_D_POINTER_FUNC_H
#define SMAJOV_D_POINTER_FUNC_H

typedef struct s_func
{
    char    name;
    void (*fonction) (va_list *ap);
}               t_func;


t_func      function[10] = {
        {'i', my_printf_i},
        {'s', my_printf_s},
        {'c', my_printf_c},
        {'d', my_printf_i},
        {'o', my_print_o},
        {'x', my_print_x},
        {'%', my_print_},
        {'X', my_print_X},
        {'u', my_print_u},
        {'z', my_print_z}
};

#endif
