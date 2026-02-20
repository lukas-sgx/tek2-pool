/*
** EPITECH PROJECT, 2026
** ~/epitech/free-project/tek2-pool/day01
** File description:
** append
*/

#include "string.h"

static int my_strlen(const char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}

static void check_free(char *str)
{
    if (str)
        free(str);
}

void append(string_t *this, const char *str)
{
    int old_len = this->str ? my_strlen(this->str) : 0;
    int new_len = my_strlen(str);
    char *new_str = malloc(sizeof(char) * (old_len + new_len + 1));
    int i = 0;
    int j = 0;

    if (new_str == NULL)
        abort();
    for (; this->str && this->str[i]; j++) {
        new_str[j] = this->str[i];
        i++;
    }
    i = 0;
    for (; str[i]; i++) {
        new_str[j] = str[i];
        j++;
    }
    new_str[j] = '\0';
    check_free(this->str);
    this->str = new_str;
}
