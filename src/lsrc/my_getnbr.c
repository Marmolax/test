/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** 
*/

int my_getnbr(char const *str)
{
    long i = 0;
    long nb = 0;
    long sign = 1;

    while (str[i] < 48 || str[i] > 57)
        i++;
    while (str[i] >= 48 && str[i] <= 57) {
        if (str[i-1] == 45)
            sign *= -1;
        nb = nb * 10 + str[i++] - 48;
        if (nb > 2147483647 || nb < -2147483648)
            return (0);
    }
    return (nb*sign);
}