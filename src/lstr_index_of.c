/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_index_of
*/

#include "str.h"

/**
 * Returns the index of the first occurence of the specified string
 * within this string starting at an offset.
 **/
ssize_t lstr_index_of(const char *this, size_t offset, const char *to_find)
{
    char *idx;

    if (this == NULL || to_find == NULL)
        return (-1);
    if (offset > strlen(this))
        return (-1);
    idx = strstr(this + offset, to_find);
    if (idx == NULL)
        return (-1);
    return ((int)(idx - this));
}
