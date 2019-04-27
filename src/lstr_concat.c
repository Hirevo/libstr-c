/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_concat
*/

#include "intern_str.h"

/**
 * Concatenates this string with one or more strings.
 *
 * Usage:
 *   You must specify the number of strings to concatenate.
 *   For each string to concatenate, you must specify:
 *     - The type of the string (LSTR_STR for 'char \*', LSTR_INT for 'int').
 *     - The string itself.
 *
 * Exemple:
 *   **`str->concat(str, 2, LSTR_STR, "foo", LSTR_INT, 0);`**
 *
 * **Does directly modify the original string.**
 **/
char *lstr_concat(char *this, size_t nb, ...)
{
    va_list list;
    strtype_t arg;
    bool to_free = false;
    char *to_use;

    if (this == NULL)
        return (NULL);
    if (nb <= 0)
        return (this);
    va_start(list, nb);
    while (nb > 0) {
        nb -= 1;
        arg = va_arg(list, strtype_t);
        to_use = internal_lstr_get_str(arg, &list, &to_free);
        this = (to_use != NULL) ? lstr_append(this, to_use) : this;
        if (to_free)
            free(to_use);
    }
    va_end(list);
    return (this);
}
