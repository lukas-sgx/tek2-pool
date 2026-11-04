/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/list
** File description:
** day01/list/pop_back.c
*/

#include "list.h"

void pop_back(list_t *this)
{
    node_t *current = NULL;

    if (!this || this->len <= 0)
        return;
    for (current = this->node_chain; current; current = current->next);
    free(current);
    this->len--;
}
