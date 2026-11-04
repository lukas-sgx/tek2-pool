/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/list
** File description:
** day01/list/list_destroy.c
*/

#include "list.h"

void list_destroy(list_t *this)
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
}
