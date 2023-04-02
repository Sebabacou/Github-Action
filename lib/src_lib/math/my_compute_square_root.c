/*
** EPITECH PROJECT, 2022
** my_compute_square_root
** File description:
** racine carrée de nb
*/

int my_compute_square_root (int nb )
{
    int n;
    int i;

    if (nb <= 0)
        return (0);
    if (nb == 1)
        return (1);
    n = nb / 2 + 1;
    for ( i = 0; i != n; i++)
        if (i * i == nb)
            return (i);
    return (0);
}
