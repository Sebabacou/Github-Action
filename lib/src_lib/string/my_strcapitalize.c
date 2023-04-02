/*
** EPITECH PROJECT, 2022
** my_strcapitalize
** File description:
** put first letters of word in maj
*/
#include <stdio.h>

void letters_before_for_min(char *str, int i)
{
    if (str[i - 1] < 65 || str [i - 1] > 122) {
        str[i] = str[i] - 32;
    }
    if (str[i - 1] < 97 && str[i - 1] > 90) {
        str[i] = str[i] - 32;
    }
}

void letters_before_for_maj(char *str, int i)
{
    if (str[i - 1] >= 65 && str [i - 1] <= 90) {
            str[i] = str[i] + 32;
    }
    if (str[i - 1] >= 97 && str[i - 1] <= 122) {
        str[i] = str[i] + 32;
    }
}

char * my_strcapitalize ( char * str )
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            printf("%s\n", "min");
            letters_before_for_min(str, i);
        }
        if (str[i] >= 65 && str[i] <= 90) {
            printf("%s\n", "passage d'une maj");
            letters_before_for_maj(str, i);
        }
        i++;
    }
    return (str);
}
