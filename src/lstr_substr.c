/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_substr
*/

#include "str.h"

/**
 * Returns the string of a specified length from the start index.
 *
 * **Does not modify the original string.**
 **/
char *lstr_substr(const char *this, size_t start, size_t length)
{
    char *ret = 0;

    if (this == NULL)
        return (NULL);
    if (start <= strlen(this))
        ret = strndup(this + start, length);
    return (ret);
}
