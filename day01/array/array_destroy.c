/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/array
** File description:
** day01/array/array_destroy.c
*/

#include "array.h"

void array_destroy(array_t *this)
{
    if (!this || !this->array_table)
        return;
    free(this->array_table);
}
