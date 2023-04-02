/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** convert string in integer
*/

int test_neg(char *str, int *neg)
{
    int is_neg = 1;
    for (; str[*neg] == '-' || str[*neg] == '+'; (*neg)++) {
        if (str[*neg] == '-') {
            is_neg *= -1;
        }
    }
    return is_neg;
}

int my_getnbr (char *str)
{
    int neg = 0;
    int res = 0;
    int is_neg = test_neg(str, &neg);
    int i;

    for (i = 0 + neg; str[i] != '\0'; i++)
        if (str[i] >= '0' && str[i] <= '9')
            res = (res * 10) + str[i] - '0';
    return (res * is_neg);
}

//if nbr  superieur a la valeur dun int return 0
