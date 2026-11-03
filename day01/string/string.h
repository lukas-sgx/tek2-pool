/*
** EPITECH PROJECT, 2026
** ~/epitech/free-project/tek2-pool/day01
** File description:
** string
*/

#ifndef STRING_H
    #define STRING_H

    #include <stdlib.h>
    #include <stdbool.h>
    #include <unistd.h>
    #include <string.h>

typedef struct string_s string_t;

struct string_s {
    char *str;
    bool (*empty)(const string_t *this);
    size_t (*length)(const string_t *this);
    const char *(*print)(const string_t *this);
    void (*clear)(string_t *this);
    void (*append)(string_t *this, const char *str);
    void (*assign)(string_t *this, const char *str);
};

void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);

bool empty(const string_t *this);
size_t length(const string_t *this);
const char *print(const string_t *this);
void clear(string_t *this);
void append(string_t *this, const char *str);
void assign(string_t *this, const char *str);

#endif /* !STRING_H */
