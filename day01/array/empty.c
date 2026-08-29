/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/array
** File description:
** day01/array/empty.c
*/

#include "array.h"
#include <stdio.h>

bool empty(const array_t *this)
{
    if (!this || !this->array_ptr)
        return true;
    for (size_t i = 0; i < this->size; i++)
        if (this->array_ptr[i])
            return false;
    return true;
}
