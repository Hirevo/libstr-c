/*
** EPITECH PROJECT, 2018
** str
** File description:
** internal_lstr_concat_helpers
*/

#include "intern_str.h"

char *internal_lstr_int_to_str(const int nb)
{
    char *ret = 0;
    int len = !nb;
    int i = nb;

    while (i) {
        len += 1;
        i /= 10;
    }
    ret = calloc(len + 1, sizeof(char));
    if (ret == 0)
        return (0);
    i = nb;
    ret[len] = 0;
    while (i) {
        ret[--len] = (i % 10) + '0';
        i /= 10;
    }
    if (nb == 0)
        ret[0] = '0';
    return (ret);
}

char *internal_lstr_get_str(const strtype_t arg, va_list *list, bool *to_free)
{
    char *to_use = 0;

    *to_free = false;
    if (arg == LSTR_STR)
        to_use = va_arg(*list, char *);
    else if (arg == LSTR_CHAR) {
        to_use = strdup("a");
        if (to_use == 0)
            return (0);
        to_use[0] = va_arg(*list, int);
        *to_free = true;
    } else if (arg == LSTR_INT) {
        to_use = internal_lstr_int_to_str(va_arg(*list, int));
        *to_free = true;
    }
    return (to_use);
}