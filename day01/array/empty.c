/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/array
** File description:
** day01/array/empty.c
*/

#include "array.h"

bool empty(const array_t *this)
{
    return this->len == 0;
}
