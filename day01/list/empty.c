/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/list
** File description:
** day01/list/empty.c
*/

#include "list.h"

bool empty(const list_t *this)
{
    if (!this)
        return false;
    return this->len == 0;
}
