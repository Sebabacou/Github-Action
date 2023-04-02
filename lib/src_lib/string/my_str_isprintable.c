/*
** EPITECH PROJECT, 2022
** my_str_isprintable
** File description:
** chara = printable ?
*/

int my_str_iprintable ( char const * str )
{
    int i = 0;
    int t = 1;

    while (str[i] != '\0') {
        if (str[i] < 32) {
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
