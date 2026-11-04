/*
** EPITECH PROJECT, 2026
** ~/epitech/free/tek2-pool/day01/list
** File description:
** day01/list/list.h
*/

#ifndef LIST_H
    #define LIST_H

    #include <stdlib.h>
    #include <stdbool.h>
    #include <unistd.h>
    #include <stddef.h>

typedef struct node_s node_t;
typedef struct list_s list_t;

struct node_s {
    void *data;
    node_t *next;
};

typedef struct list_s {
    size_t len;
    node_t *node_chain;

    bool (*empty)(const list_t *this);
    size_t (*size)(const list_t *this);
    void *(*get)(const list_t *this, size_t position);
    bool (*set)(list_t *this, size_t position, void *value);
    void (*push_front)(list_t *this, void *value);
    void (*push_back)(list_t *this, void *value);
    void (*pop_front)(list_t *this);
    void (*pop_back)(list_t *this);
    void (*clear)(list_t *this);
    void (*apply)(list_t *this, void *(*function)(void *));
} list_t;

void list_init(list_t *this);
void list_destroy(list_t *this);

bool empty(const list_t *this);
size_t size(const list_t *this);
void *get(const list_t *this, size_t position);
bool set(list_t *this, size_t position, void *value);
void push_front(list_t *this, void *value);
void push_back(list_t *this, void *value);
void pop_front(list_t *this);
void pop_back(list_t *this);
void clear(list_t *this);
void apply(list_t *this, void *(*function)(void *));

#endif /* !LIST_H */
