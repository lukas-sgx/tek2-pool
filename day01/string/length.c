/*
** EPITECH PROJECT, 2026
** ~/epitech/free-project/tek2-pool/day01
** File description:
** lenght
*/

#include "string.h"

static int my_strlen(const char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}

size_t length(const string_t *this)
{
    return my_strlen(this->str);
}
