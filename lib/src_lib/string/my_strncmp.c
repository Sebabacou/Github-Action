/*
** EPITECH PROJECT, 2022
** my_strncmp
** File description:
** compare s1 et s2
*/

#include <stddef.h>
int my_strlen(char const *str);

int my_strncmp ( char const * s1 , char const * s2, int n)
{
    unsigned int len = 0;
    unsigned int temp_len = 0;

    if (s1 == NULL || s2 == NULL)
        return 84;
    len = my_strlen(s1);
    temp_len = my_strlen(s2);
    if (len < n || temp_len < n)
        return 84;
    for (int i = 0; i != n; i++)
        if (s1[i] != s2[i])
            return 84;
    return 0;
}
