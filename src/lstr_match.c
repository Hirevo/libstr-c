/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_match
*/

#include "intern_str.h"

/**
 * Returns whether this string match with the specified pattern.
 *
 * Supports * and ? as wildcards but no escape mechanism.
**/
bool lstr_match(const char *this, const char *pattern)
{
	if (this == NULL || pattern == NULL)
		return (false);
	return (internal_lstr_match(this, pattern, 0, 0));
}
