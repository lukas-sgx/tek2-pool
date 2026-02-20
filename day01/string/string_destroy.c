/*
** EPITECH PROJECT, 2026
** ~/epitech/free-project/tek2-pool/day01
** File description:
** string_destroy
*/

#include "string.h"

void string_destroy(string_t *this)
{
    if (this->str)
        free(this->str);
    this->str = NULL;
}
