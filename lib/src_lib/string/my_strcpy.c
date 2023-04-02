/*
** EPITECH PROJECT, 2022
** my_strcpy
** File description:
** copy une chaine de cara
*/

char * my_strcpy ( char *dest , char const *src )
{
    int i = 0;
    char temp;

    while (src[i] != '\0') {
        temp = src[i];
        dest[i] = temp;
        i++;
    }
    dest[i + 1] = '\0';
    return dest;
}
