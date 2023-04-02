/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** compare s1 à s2
*/

#include <stddef.h>
int my_strlen(char const *str);

int my_strcmp ( char const * s1 , char const * s2 )
{
    unsigned int len = 0;

    if (s1 == NULL || s2 == NULL)
        return 84;
    len = my_strlen(s1);
    if (len != my_strlen(s2))
        return 84;
    for (int i = 0; i != len; i++)
        if (s1[i] != s2[i])
            return 84;
    return 0;
}
