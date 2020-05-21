/*
** EPITECH PROJECT, 2020
** delete_node.c
** File description:
** delete_node.c
*/

#include "linked_list.h"

void delete_node(list_t **node, list_t *pointer)
{
    if (*node == NULL || pointer == NULL)
        return;
    if (*node == pointer) {
        *node = pointer->next;
    }
    if (pointer->next != NULL) {
        pointer->next->previous = pointer->previous;
    }
    if (pointer->previous) {
        pointer->previous->next = pointer->next;
    }
    free(pointer);
}