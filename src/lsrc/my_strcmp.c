/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** 
*/

int my_strcmp(char const *s1, char const *s2)
{
    while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}