/*
** EPITECH PROJECT, 2026
** ~/epitech/free-project/tek2-pool/day01
** File description:
** array
*/

#ifndef ARRAY_H
    #define ARRAY_H

    #include <stdlib.h>
    #include <stdbool.h>
    #include <unistd.h>
    #include <stddef.h>

typedef void *(*ptr_t)(void *);

typedef struct array_s {
    void **array_ptr;
    size_t size;
} array_t;

void array_init(array_t *this, size_t size);
void array_destroy(array_t *this);
bool empty(const array_t *this);
size_t size(array_t *this);
void resize(array_t *this, size_t size);
void *get(const array_t *this, size_t index);
bool set(array_t *this, size_t index, void *value);
void apply(array_t *this, void *(*function)(void *));

#endif /* !ARRAY_H */
