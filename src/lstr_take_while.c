/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_take_while
*/

#include "intern_str.h"

/**
 * Returns the longest prefix whose all characters satisfies the predicate.
 *
 * **Does not modify the original string.**
 **/
char *lstr_take_while(
    const char *this, bool (*predicate)(void *, size_t, char), void *context)
{
    size_t idx = 0;

    if (this == NULL || predicate == NULL)
        return (-1);
    for (idx = 0; this[idx] && predicate(context, idx, this[idx]); idx += 1)
        ;
    return (strndup(this, idx));
}
