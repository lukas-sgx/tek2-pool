/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/list
** File description:
** day01/list/clear.c
*/

#include "list.h"
#include <stdlib.h>

void clear(list_t *this)
{
    node_t *current = NULL;
    node_t *next = NULL;

    if (!this)
        return;
    for (current = this->node_chain; current; current = next) {
        next = current->next;
        free(current);
    }
    this->node_chain = NULL;
    this->len = 0;
}
