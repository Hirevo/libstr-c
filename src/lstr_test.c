/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_test
*/

#include "intern_str.h"

/**
 * Tests whether the specified candidate match with the pattern described in
 * this string.
 *
 * Supports * and ? as wildcards but no escape mechanism.
 **/
bool lstr_test(const char *this, const char *candidate)
{
    if (this == NULL || candidate == NULL)
        return (false);
    return (internal_lstr_match(candidate, this, 0, 0));
}
