/*
** EPITECH PROJECT, 2022
** my_is_isupper
** File description:
** chara = A
*/

int my_str_isupper( char const * str )
{
    int i = 0;
    int t = 1;

    while (str[i] != '\0') {
        if (str[i] < 65 || str[i] > 97) {
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
