/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/array
** File description:
** day01/array/set.c
*/

#include "array.h"

bool set(array_t *this, size_t index, void *value)
{
    if (this->len < index)
        return false;
    this->array_table[index] = value;
    return true;
}