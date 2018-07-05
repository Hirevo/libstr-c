/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_reverse
*/

#include "str.h"

/*
** Returns this string reversed.
**
** Does not modify the original string.
*/
char *lstr_reverse(char *this)
{
	int len = 0;
	int idx = 0;
	char *ret = 0;

	if (this == NULL)
		return (NULL);
	len = strlen(this);
	ret = calloc(len + 1, sizeof(char));
	if (ret == NULL)
		return (NULL);
	while (idx < len) {
		idx += 1;
		ret[idx - 1] = this[len - idx];
	}
	ret[len] = 0;
	return (ret);
}
