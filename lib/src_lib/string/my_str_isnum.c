/*
** EPITECH PROJECT, 2022
** my_str_isnum
** File description:
** chara = num ?
*/

int my_str_isnum( char const * str )
{
    int i = 0;
    int t = 1;

    while (str[i] != '\0') {
        if (str[i] < 48 || str[i] > 57) {
            t = 0;
        }
        i++;
    }
    if (t == 0) {
        return (0);
    } else {
        return (1);
    }
}
