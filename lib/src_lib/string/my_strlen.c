/*
** EPITECH PROJECT, 2023
** template_project_c
** File description:
** my_strlen.c
*/


unsigned long long my_strlen(char const *str)
{
    unsigned long long len;
    char charactu = 1;

    for (len = 0; charactu != '\0'; len++)
        charactu = str[len];
    len--;
    return len;
}
