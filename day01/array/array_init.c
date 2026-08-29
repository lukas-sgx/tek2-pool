/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/array
** File description:
** day01/array/array_init.c
*/

#include "array.h"
#include <stdio.h>

void array_init(array_t *this, size_t size)
{
    if (!this)
        return;
    this->array_ptr = malloc(sizeof(ptr_t) * (size + 1));
    if (!this->array_ptr)
        return;
    for (size_t i = 0; i < size; i++)
        this->array_ptr[i] = NULL;
    this->size = size;
}
