/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/list
** File description:
** day01/list/get.c
*/

#include "list.h"

void *get(const list_t *this, size_t position)
{
    node_t *current = this->node_chain;

    if (!this || this->len == 0 || this->len < position)
        return NULL;
    for (size_t idx = 0; idx < position; idx++)
        current = current->next;
    return current->data;
}
