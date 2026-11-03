/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/array
** File description:
** day01/array/array_init.c
*/

#include "array.h"
#include <stdio.h>

void array_init(array_t *this, size_t size_array)
{
    if (!this)
        return;
    this->array_table = malloc(sizeof(void*) * (size_array + 1));
    if (!this->array_table)
        return;
    for (size_t i = 0; i < size_array; i++)
        this->array_table[i] = NULL;
    this->len = size_array;
    this->empty = &empty;
    this->size = &size;
    this->resize = &resize;
    this->get = &get;
    this->set = &set;
    this->apply = &apply;
}
