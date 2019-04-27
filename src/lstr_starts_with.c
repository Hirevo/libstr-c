/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_starts_with
*/

#include "str.h"

/**
 * Returns whether this string starts with the specified string.
 **/
bool lstr_starts_with(const char *this, const char *prefix)
{
    if (this == NULL || prefix == NULL)
        return (false);
    size_t idx = 0;
    for (; this[idx] && prefix[idx] && this[idx] == prefix[idx]; idx++)
        ;
    return (prefix[idx] == 0);
}
