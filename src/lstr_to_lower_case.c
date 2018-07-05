/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_to_lower_case
*/

#include "str.h"

/*
** Transforms this string to lowercase.
**
** Does directly modify the original string.
*/
char *lstr_to_lower_case(char *this)
{
	if (this == NULL)
		return (NULL);
	for (size_t idx = 0; this[idx]; idx++)
		this[idx] = tolower(this[idx]);
	return (this);
}
