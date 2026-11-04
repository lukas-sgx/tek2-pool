/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/list
** File description:
** day01/list/push_back.c
*/

#include "list.h"

void push_back(list_t *this, void *value)
{
    node_t *new_node = NULL;
    node_t *current = NULL;

    if (this == NULL)
        return;
    new_node = malloc(sizeof(*new_node));
    if (new_node == NULL)
        return;
    new_node->data = value;
    new_node->next = NULL;
    if (this->node_chain == NULL) {
        this->node_chain = new_node;
    } else {
        for (current = this->node_chain; current->next;
            current = current->next);
        current->next = new_node;
    }
    this->len++;
}
