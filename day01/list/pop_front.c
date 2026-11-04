/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/list
** File description:
** day01/list/pop_front.c
*/

#include "list.h"

void pop_front(list_t *this)
{
    node_t *current = NULL;
    node_t *temp = NULL;

    if (!this || !this->node_chain || this->len <= 0)
        return;
    current = this->node_chain;
    temp = current->next;
    free(current);
    this->node_chain = temp;
    this->len--;
}
