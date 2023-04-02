/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** display a nbr
*/

void my_putchar(char c);

void my_put_nbr(int nb)
{
    int i;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    for (i = 1; (nb / i) >= 10; i *= 10);
    for (i = i; i > 0; i /= 10)
        my_putchar((nb / i) % 10 + '0');
}
