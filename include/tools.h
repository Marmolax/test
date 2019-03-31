/*
** EPITECH PROJECT, 2019
** tools 
** File description:
** tools
*/


#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define ERROR_MESSAGE (write(2, "Error\n", 6));

//lsrc
void my_putchar(char c);
int my_put_nbr2(int nb);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_printf(char *ac, ...);
void printf_case(int val, va_list ap);
int my_getnbr(char const *str);
int my_strcmp(char const *s1, char const *s2);
void ls(char *path);