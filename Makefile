##
## Makefile for Makefile in /home/my_printf/smajov_d/Makefile
##
## Made by SMAJOVIC Demirel
## Login   <smajov_d@etna-alternance.net>
##
## Started on  Sat Oct  1 19:09:54 2016 SMAJOVIC Demirel
## Last update Sun Oct  2 19:29:21 2016 SMAJOVIC Demirel
##

FILES =	source/main.c \
	source/function2.c \
	source/function.c \
	source/function_x.c \
	lib/my_putchar.c \
        lib/my_isneg.c \
        lib/my_put_nbr.c \
        lib/my_swap.c \
        lib/my_putstr.c \
        lib/my_strlen.c \
        lib/my_getnbr.c \
        lib/my_strcpy.c \
        lib/my_strncpy.c \
        lib/my_strcmp.c \
        lib/my_strncmp.c \
        lib/my_strcat.c \
        lib/my_strncat.c \
        lib/my_strdup.c \
        lib/my_str_to_wordtab.c \
        lib/my_strstr.c

NAME =  my_printf.a

LIB = libmy_printf_`uname -m`-`uname -s`.a

LIB2 = libmy_printf_`uname -m`-`uname -s`.so

all:	my_printf_static my_printf_dynamic

my_printf_static:
			gcc -c -Wall -Werror -Wpedantic $(FILES)
			ar -rc $(LIB) *.o
			ranlib $(LIB)

my_printf_dynamic:
			gcc -shared -Wall -Werror -Wpedantic $(FILES) -o $(LIB2)

clean:
	rm  -f *.o

fclean:	fclean clean
	rm -rf $(LIB) $(LIB2)

re:	fclean all

.PHONY:	clean fclean re all
