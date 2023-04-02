/*
** EPITECH PROJECT, 2022
** my
** File description:
** fonc in libmy
*/

#ifndef _MY_LIB_H_
    #define _MY_LIB_H_
    #define ULL unsigned long long

    char **my_str_to_word_array(const char *str, const char decoupe);
    void my_sort_int_arrray (int *, int);

    int my_compute_power_rec (int, int);
    int my_compute_square_root (int);
    int my_find_prime_sup (int);
    int my_getnbr (char const *);
    int my_isneg (int);
    int my_is_prime (int);

    int my_putchar (char);
    int my_put_nbr (int);
    int my_putstr (char const *);

    char *my_revstr (char *);
    int my_showmem (char const *, int);
    int my_showstr (char const *);
    char *my_strcapitalize (char *);
    char *my_strcat (char *, char const *);
    int my_strcmp (char const *, char const *);
    char *my_strcpy (char *, char, char const *);
    int my_str_isaplpha (char const *);
    int my_str_islower (char const *);
    int my_str_isnum (char const*);
    int my_str_isprintable (char const *);
    int my_str_isuppper (char const *);
    ULL my_strlen (char const *);
    char *my_strlowcase (char *);
    char *my_strncat (char *, char const *, int);
    int my_strncmp (char const *, char const *, int);
    char *my_strncpy (char *, char const *, int);
    char *my_strstr (char *, char const *);
    char *my_strupcase (char *);

#endif
