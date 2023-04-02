/*
** EPITECH PROJECT, 2022
** my_strcat
** File description:
** put src in end of dest
*/

int my_strlen(char *dest);
char *my_strcpy(char *dest, char const *src);

char * my_strcat ( char * dest , char const * src)
{
    int len = my_strlen(dest);
    int len2 = 0 ;

    while (src[len2] != '\0') {
        len2++;
    }
    if (len >= len2) {
        my_strcpy(dest + len, src);
    }
    return (dest);
}
