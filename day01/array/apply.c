/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/array
** File description:
** day01/array/apply.c
*/

#include "array.h"

void apply(array_t *this, void *(*function)(void *))
{
    for (size_t i = 0; i < this->len; i++)
        this->array_table[i] = function((void *)i);
}