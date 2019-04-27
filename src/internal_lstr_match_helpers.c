/*
** EPITECH PROJECT, 2018
** str
** File description:
** internal_lstr_match_helpers
*/

#include "intern_str.h"

bool internal_lstr_match_helper(
    const char *s1, const char *s2, int idx1, int idx2)
{
    while (s1[idx1] != '\0') {
        if (internal_lstr_match(s1, s2, idx1, idx2 + 1))
            return (true);
        idx1 += 1;
    }
    return (internal_lstr_match(s1, s2, idx1, idx2 + 1));
}

bool internal_lstr_match(const char *s1, const char *s2, int idx1, int idx2)
{
    if (s2[idx2] == '\0')
        return (s1[idx1] == '\0');
    else if (s2[idx2] == '*')
        return (internal_lstr_match_helper(s1, s2, idx1, idx2));
    else if (s2[idx2] != '?' && s2[idx2] != s1[idx1])
        return (false);
    else
        return (internal_lstr_match(s1, s2, idx1 + 1, idx2 + 1));
}
