/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_starts_with
*/

#include "str.h"

/*
** Returns whether this string starts with the specified string.
*/
bool lstr_starts_with(const char *this, const char *prefix)
{
	if (this == NULL)
		return (false);
	return (lstr_index_of(this, 0, prefix) == 0);
}
