/*
** EPITECH PROJECT, 2022
** my_compute_power_rec
** File description:
** puissance de n
*/

int my_compute_power_rec (int nb , int p )
{
    long long res;

    if (nb == 0)
        return (0);
    if (p == 0)
        return (1);
    if (p == 1)
        return (nb);
    res = nb * my_compute_power_rec(nb , p - 1);
    if ( res > 2147483647 || res < -2147483647)
        return (0);
    return (res);
}
