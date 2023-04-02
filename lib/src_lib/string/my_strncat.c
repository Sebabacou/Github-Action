/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** put n src in end of dest
*/

int my_strlen(char *dest);
char *my_strcpy(char *dest, char const *src);

int lenconst(char const *src)
{
    int len = 0;

    while (src[len] != '\0') {
        len++;
    }
    return (len);
}

char * my_strncat ( char * dest , char const * src, int n)
{
    int len = my_strlen(dest);
    int len2 = 0 ;
    char save[lenconst(src)] ;

    while (len2 != n) {
        len2++;
        save[len2] = src[len2];
    }
    if (len * 2 >= len2) {
        my_strcpy(dest + len, save);
    }
    return (dest);
}
