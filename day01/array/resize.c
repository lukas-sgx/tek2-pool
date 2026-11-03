/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/array
** File description:
** day01/array/resize.c
*/

#include "array.h"
#include <stdio.h>

void resize(array_t *this, size_t size)
{
    void **new_array = NULL;

    new_array = realloc(this->array_table, sizeof(void*) * (size + 1));
    if (!new_array)
        return;
    for (size_t i = this->len; i < size; i++)
        new_array[i] = NULL;
    this->array_table = NULL;
    this->array_table = new_array;
    this->len = size;
}
