/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_drop_while
*/

#include "intern_str.h"

/**
 * Returns the suffix remaining after applying **`lstr_take_while()`**.
 *
 * **Does not modify the original string.**
**/
char *lstr_drop_while(
    const char *this, bool (*predicate)(void *, size_t, char), void *context)
{
    size_t idx = 0;

    if (this == NULL || predicate == NULL)
        return (-1);
    for (idx = 0; this[idx] && predicate(context, idx, this[idx]); idx += 1);
    return (strdup(this + idx));
}
