/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/list
** File description:
** day01/list/list_init.c
*/

#include "list.h"

void list_init(list_t *this)
{
    if (!this)
        return;
    this->len = 0;
    this->empty = &empty;
    this->size = &size;
    this->get = &get;
    this->set = &set;
    this->push_front = &push_front;
    this->push_back = &push_back;
    this->pop_front = &pop_front;
    this->pop_back = &pop_back;
    this->clear = &clear;
    this->apply = &apply;
}
