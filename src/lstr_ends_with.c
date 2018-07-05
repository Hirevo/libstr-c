/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_ends_with
*/

#include "str.h"

/*
** Returns whether this string ends with the specified string.
*/
bool lstr_ends_with(const char *this, const char *suffix)
{
	int cur;
	int len;

	if (this == NULL || suffix == NULL)
		return (false);
	cur = strlen(this);
	len = strlen(suffix);
	if (cur < len)
		return (false);
	cur -= len;
	return (strcmp(this + cur, suffix) == 0);
}
