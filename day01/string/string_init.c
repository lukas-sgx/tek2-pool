/*
** EPITECH PROJECT, 2026
** ~/epitech/free-project/tek2-pool/day01
** File description:
** main
*/

#include "string.h"

void string_init(string_t *this, const char *s)
{
    this->str = strdup(s);
    this->empty = empty;
    this->length = length;
    this->print = print;
    this->clear = clear;
    this->append = append;
    this->assign = assign;
}
