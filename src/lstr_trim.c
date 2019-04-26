/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_trim
*/

#include "str.h"

/**
 * Trims whitespaces on both ends of the string.
 *
 * **Does not modify the original string.**
 **/
char *lstr_trim(char *this)
{
    if (this == NULL)
        return (NULL);
    size_t start;
    for (start = 0; this[start] && isspace(this[start]); start++);
    size_t end;
    for (end = strlen(this) - 1; end >= 0 && isspace(this[end]); end--);
    return (lstr_slice(this, start, end + 1));
}
