/*
** EPITECH PROJECT, 2022
** putstr
** File description:
** fonction my_strlen
*/

#include <unistd.h>

int my_strlen(char const *str);

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
