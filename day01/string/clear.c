/*
** EPITECH PROJECT, 2026
** ~/epitech/free-project/tek2-pool/day01
** File description:
** clear
*/

#include "string.h"

void clear(string_t *this)
{
    if (this->str)
        free(this->str);
    this->str = malloc(sizeof(char));
    if (this->str)
        this->str[0] = '\0';
}
