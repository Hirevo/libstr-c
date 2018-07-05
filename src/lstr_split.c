/*
** EPITECH PROJECT, 2018
** str
** File description:
** lstr_split
*/

#include "intern_str.h"

/*
** Splits the string by the specified separator string.
**
** Does not modify the original string.
*/
vec_t *lstr_split(const char *this, const char *sep)
{
	vec_t *ret;
	ssize_t size;

	if (this == NULL || sep == NULL)
		return (NULL);
	size = lstr_nb_occur(this, sep);
	if (size == 0 || size == -1)
		return (0);
	ret = lvec_with_capacity(size);
	if (ret == 0)
		return (0);
	for (size_t idx = 0; this[idx]; idx++) {
		ret = intern_lstr_split_helper(this, sep, ret, &idx);
		if (ret == 0)
			return (0);
	}
	return (ret);
}
