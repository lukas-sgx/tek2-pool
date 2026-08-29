/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/array
** File description:
** day01/array/get.c
*/

#include "array.h"

void *get(const array_t *this, size_t index)
{
    if (this->size < index)
        return NULL;
    return (void *)this->array_ptr[index];
}
