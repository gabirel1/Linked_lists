/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include "linked_list.h"

void main(void)
{
    list_t *my_list = NULL;

    add_node_at_back("1", &my_list);
    add_node_at_back("2", &my_list);
    add_node_at_back("3", &my_list);
    add_node_at_back("4", &my_list);
    add_node_at_back("5", &my_list);
    add_node_at_back("6", &my_list);
    add_node_at_front("7", &my_list);

    list_t *cp = my_list;

    for (; cp->next != NULL; cp = cp->next) {
        printf("%s\n", cp->command);
    }
    printf("%s\n", cp->command);
    printf("\n\n\n");
    for (; cp != NULL; cp = cp->previous) {
        printf("%s\n", cp->command);
    }
    printf("\n\n\n");
    delete_node(&my_list, my_list);
    for (; my_list->next != NULL; my_list = my_list->next) {
        printf("%s\n", my_list->command);
    }
    printf("%s\n", my_list->command);
    printf("\n\n\n");
    my_list = my_list->previous;
    delete_node(&my_list, my_list->next);

    for (; my_list != NULL; my_list = my_list->previous) {
        printf("%s\n", my_list->command);
    }
}