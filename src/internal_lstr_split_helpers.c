/*
** EPITECH PROJECT, 2018
** str
** File description:
** internal_lstr_split_helpers
*/

#include "intern_str.h"

int internal_lstr_len_to_substr(const char *src, const char *suffix)
{
	char *idx;

	if (src == 0 || suffix == 0)
		return (-1);
	idx = strstr(src, suffix);
	if (idx == 0)
		return (-1);
	return (idx - src);
}

vec_t *intern_lstr_split_helper(
	const char *this, const char *sep, vec_t *ret, size_t *idx)
{
	int len = internal_lstr_len_to_substr(this + *idx, sep);
	char *to_add = ((len == -1) ? strdup(this + *idx) :
		strndup(this + *idx, len));
	ssize_t size;

	if (to_add == 0)
		return (0);
	*idx += strlen(to_add) + ((len == -1) ? 0 : strlen(sep)) - 1;
	size = lvec_push_back(ret, 1, to_add);
	return ((size != -1) ? ret : 0);
}
