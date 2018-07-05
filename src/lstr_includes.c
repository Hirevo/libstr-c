/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_includes
*/

#include "str.h"

/*
** Returns whether the specified string is found within this string.
*/
bool lstr_includes(const char *this, const char *to_find)
{
	if (this == NULL)
		return (false);
	return (lstr_index_of(this, 0, to_find) != -1);
}
