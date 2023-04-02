/*
** EPITECH PROJECT, 2022
** my_str_islower
** File description:
** chara = a
*/

int my_str_islower( char const * str )
{
    int i = 0;
    int t = 1;

    while (str[i] != '\0')
        if (str[i] < 97 || str[i] > 122)
            t = 0;
        i++;
    if (t == 0) {
        return (0);
    } else {
        return (1);
    }
}
