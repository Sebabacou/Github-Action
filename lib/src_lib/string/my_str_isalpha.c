/*
** EPITECH PROJECT, 2022
** my_str_isalpha
** File description:
** chara = alpha ?
*/

int my_str_isalpha ( char const * str )
{
    int i;
    int verif = 1;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 65 || str[i] > 122)
            verif = 0;
        if (str[i] > 90 && str[i] < 97)
            verif = 0;
        i++;
    }
    if (verif == 0)
        return (0);
    else {
        return (1);
    }
}
