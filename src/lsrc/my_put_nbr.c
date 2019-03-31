/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** 
*/

void my_putchar(char c);
int my_put_nbr2(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        nb = 147483648;
    }
    if (nb < 0){
        nb = -nb;
        my_putchar('-');
    }
    return (nb);
}

int my_put_nbr(int nb)
{
    nb = my_put_nbr2(nb);
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    else
        my_putchar(nb + '0');
    return (0);
}