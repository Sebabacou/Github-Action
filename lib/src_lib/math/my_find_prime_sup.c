/*
** EPITECH PROJECT, 2022
** my_find_prime_sup
** File description:
** trouve le premier le plus proche superieur ou egal à nb
*/

int my_is_prime(int nb);

int my_find_prime_sup (int nb )
{
    int i = 0;
    int n;

    for (n = nb; i != 1; n++)
        i = my_is_prime(n);
    return n;
}
