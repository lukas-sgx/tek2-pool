/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/list
** File description:
** day01/list/set.c
*/

#include "list.h"

bool set(list_t *this, size_t position, void *value)
{
    node_t *current = this->node_chain;

    if (this->len == 0 || this->len < position)
        return false;
    for (size_t idx = 0; idx < position; idx++)
        current = current->next;
    current->data = value;
    return true;
}
