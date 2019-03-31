/*
** EPITECH PROJECT, 2018
** my_printf_boostrap.c
** File description:
** my printf boostrap
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../../include/tools.h"

int my_printf(char *ac, ...)
{
    va_list ap;
    int val = 0;
    int x = 0;
    int i = 0;

    va_start(ap, ac);
    while (ac[x]) {
        if (ac[x] == '%') {
            x = x + 1;
            val = ac[x];
            printf_case(val, ap);
        }
        if (ac[x - 1] != '%') {
            my_putchar(ac[x]);
            i = i + 1;
        }
        x = x + 1;
    }
    va_end (ap);
    return (0);
}

void printf_case(int val, va_list ap)
{
    if (val == 'd' || val == 'i')
        my_put_nbr(va_arg(ap, int));
    if (val == 'c')
        my_putchar(va_arg(ap, int));
    if (val == 's')
        my_putstr(va_arg(ap, char *));
}
