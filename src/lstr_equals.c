/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_equals
*/

#include "str.h"

/**
 * Checks for string equality.
 **/
bool lstr_equals(const char *this, const char *candidate)
{
    if (this == NULL || candidate == NULL)
        return (NULL);
    return (strcmp(this, candidate) == 0);
}
