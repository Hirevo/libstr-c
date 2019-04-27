/*
** EPITECH PROJECT, 2018
** str
** File description:
** intern_str
*/

#pragma once

#include "str.h"
#include <stdbool.h>

bool internal_lstr_match(const char *s1, const char *s2, int idx1, int idx2);
bool internal_lstr_match_helper(
    const char *s1, const char *s2, int idx1, int idx2);
char *internal_lstr_int_to_str(const int nb);
char *internal_lstr_get_str(const strtype_t arg, va_list *list, bool *to_free);
int internal_lstr_len_to_substr(const char *src, const char *suffix);
vec_t *intern_lstr_split_helper(
    const char *this, const char *sep, vec_t *ret, size_t *idx);
