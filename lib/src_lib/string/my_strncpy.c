/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
** copi de n chara de src dans dest
*/

int my_strlen(char const *str);

char * my_strncpy ( char *dest , char const *src, int n )
{
    int i = 0;
    char temp;

    while (i != n) {
        temp = src[i];
        dest[i] = temp;
        i++;
    }
    if (n > my_strlen(src)) {
        dest[i + 1] = '\0';
    }
    return (dest);
}
