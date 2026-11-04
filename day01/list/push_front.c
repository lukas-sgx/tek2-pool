/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/list
** File description:
** day01/list/push_front.c
*/

#include "list.h"

void push_front(list_t *this, void *value)
{
    node_t *new_node = NULL;

    if (!this)
        return;
    new_node = malloc(sizeof(*new_node));
    if (new_node == NULL)
        return;
    new_node->data = value;
    new_node->next = this->node_chain;
    this->node_chain = new_node;
    this->len++;
}
