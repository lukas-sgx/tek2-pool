/*
** EPITECH PROJECT, 2026
** ~/epitech/free-project/tek2-pool/day01
** File description:
** print
*/

#include "string.h"

static int my_strlen(const char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}

const char *print(const string_t *this)
{
    write(1, this->str, my_strlen(this->str));
    return this->str;
}
