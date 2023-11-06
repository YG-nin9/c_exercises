#ifndef _SINGLE_LINKED_LIST_H_
#define _SINGLE_LINKED_LIST_H_

#include "Platform_Types.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


struct Node{

    uint32 Data;
    struct Node *Next_Node;

};


void insert_node_start(struct Node **my_list);
void insert_node_end(struct Node **my_list);
uint32 list_length(struct Node *my_list);
void insert_after_node(struct Node *my_list);
void delete_node_start(struct Node **my_list);
void delete_pos_node(struct Node *my_list);
void display_nodes(struct Node *my_list);
void reverse_list(struct Node **my_list);
void nodes_swap(struct Node **my_list);

#endif // SINGLE_LINKED_LIST_H_INCLUDED

