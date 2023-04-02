/*
** EPITECH PROJECT, 2022
** str_to_word_array
** File description:
** Write a function that splits a string into words.
** Separators will all be non-alphanumeric characters.
*/

#include <stdlib.h>
#include "../../../include/my.h"
#include <stdio.h>

static unsigned long long len_file_len(const char *str)
{
    ULL i;

    for (i = 0; str[i] ; i++);
    return i;
}

static unsigned long long nbr_line_nbr(char const *str, const char decoupe)
{
    ULL i;
    ULL nbr = 0;

    for (i = 0; str[i] != '\0' ; i++)
        if (str[i] == decoupe)
            nbr++;
    return nbr;
}

static unsigned long long len_line_len(char const *st, int pos, const char dec)
{
    ULL letter_count = 0;

    for (pos = pos; st[pos] != dec; pos++)
        letter_count++;
    return letter_count;
}

char **my_str_to_word_array(char const *str, char const decoupe)
{
    const ULL nbr_line = nbr_line_nbr(str, decoupe);
    char **buffer = malloc(sizeof(char *) * (nbr_line + 1));
    const ULL size_file = len_file_len(str);
    ULL len_line;
    ULL i;
    ULL j;
    ULL pos_str = 0;

    for (i = 0; i != nbr_line; i++) {
        len_line = len_line_len(str, pos_str, decoupe);
        buffer[i] = malloc(sizeof(char) * (len_line + 1));
        for (j = 0; j != len_line; j++) {
            buffer[i][j] = str[pos_str];
            pos_str++;
        }
        pos_str++;
        buffer[i][j] = '\0';
    }
    buffer[nbr_line] = NULL;
    return buffer;
}
