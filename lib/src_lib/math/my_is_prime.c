/*
** EPITECH PROJECT, 2022
** my_is_prime
** File description:
** nb est il primaire
*/

int my_is_prime (int nb )
{
    int i;

    if (nb <= 1)
        return (0);
    for (i = 2; i != nb - 1; i++)
        if (i * i == nb)
            return 1;
    return 0;
}
