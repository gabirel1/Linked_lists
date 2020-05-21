/*
** EPITECH PROJECT, 2020
** linked_list.h
** File description:
** linked_list.h
*/

#include "stdlib.h"
#include "unistd.h"
#include "stdio.h"
#include "string.h"

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

typedef struct list_s {
    char *command;
    struct list_s *next;
    struct list_s *previous;
} list_t;

void delete_node(list_t **node, list_t *pointer);
void add_node_at_back(char *command, list_t **node);
void add_node_at_front(char *command, list_t **node);

#endif /* !LINKED_LIST_H_ */
