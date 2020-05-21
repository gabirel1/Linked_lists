/*
** EPITECH PROJECT, 2020
** add_node.c
** File description:
** add_node.c
*/

#include "linked_list.h"

void add_node_at_back(char *command, list_t **node) //changer le 1er arguments dans le type qu'on veut
{
    list_t *new = malloc(sizeof(list_t));
    list_t *tmp = *node;

    new->command = strdup(command);
    new->next = NULL;

    if (*node == NULL) {
        new->previous = NULL;
        *node = new;
        return;
    }
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = new;
    new->previous = tmp;
}

void add_node_at_front(char *command, list_t **node)
{
    list_t *new = malloc(sizeof(list_t));

    new->command = strdup(command);
    new->previous = NULL;
    if (*node == NULL) {
        new->next = NULL;
        *node = new;
        return;
    }
    (*node)->previous = new;
    new->next = *node;
    *node = (*node)->previous;
}