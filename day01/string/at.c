/*
** EPITECH PROJECT, 2026
** ~/epitech/free-project/tek2-pool/day01
** File description:
** at
*/

#include "string.h"

char at(const string_t *this, size_t pos)
{
    size_t i = 0;

    for (; i <= pos
        && this->str[i] != '\0'; i++);
    if (this->str[i] == '\0')
        return -1;
    return this->str[i];
}
