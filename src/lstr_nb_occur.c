/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_nb_occur
*/

#include "str.h"
#include <unistd.h>

/**
 * Returns the number of times the specified string
 * is found within this string
 **/
ssize_t lstr_nb_occur(const char *this, const char *str)
{
    ssize_t idx = 0;
    ssize_t nb_occur = 0;

    if (this == NULL || str == NULL)
        return (-1);
    idx = lstr_index_of(this, idx, str);
    while (idx != -1) {
        idx = lstr_index_of(this, idx + 1, str);
        nb_occur += 1;
    }
    return (nb_occur);
}
