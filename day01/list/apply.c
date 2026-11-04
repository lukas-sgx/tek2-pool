/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/list
** File description:
** day01/list/apply.c
*/

#include "list.h"

void apply(list_t *this, void *(*function)(void *))
{
    node_t *current = NULL;

    if (!this)
        return;
    for (current = this->node_chain; current; current = current->next)
        current->data = function(current->data);
}
