/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** reverse string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char temp;
    int i;
    const int l = my_strlen(str) - 1;

    for (i = 0; i <= l / 2; i++) {
        temp = str[i];
        str[i] = str[l - i];
        str[l - i] = temp;
    }
    return (str);
}
