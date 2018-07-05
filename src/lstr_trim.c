/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_trim
*/

#include "str.h"

/*
** Does not modify the original string
*/
char *lstr_trim(char *this)
{
	int start = -1;
	int end;

	if (this == NULL)
		return (NULL);
	while (this[++start] && (this[start] == ' ' || this[start] == '\t'));
	end = strlen(this) - 1;
	while (end >= 0 &&
		(this[end] == ' ' || this[end] == '\t' || this[end] == '\n'))
		end -= 1;
	return (lstr_slice(this, start, end + 1));
}
