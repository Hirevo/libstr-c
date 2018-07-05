/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_slice
*/

#include "str.h"

/*
** Returns the string between the start and end indexes.
**
** Does not modify the original string.
*/
char *lstr_slice(const char *this, size_t start, size_t end)
{
	char *ret = 0;

	if (this == NULL)
		return (NULL);
	if (start <= strlen(this))
		ret = strndup(this + start, end - start);
	return (ret);
}
