/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_to_upper_case
*/

#include "str.h"

/**
 * Transforms this string to uppercase.
 *
 * **Does directly modify the original string.**
 **/
char *lstr_to_upper_case(char *this)
{
    if (this == NULL)
        return (NULL);
    for (size_t idx = 0; this[idx]; idx++)
        this[idx] = toupper(this[idx]);
    return (this);
}
