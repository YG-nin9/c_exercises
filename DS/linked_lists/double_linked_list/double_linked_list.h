#ifndef _DOUBLE_LINKED_LIST_H_
#define _DOUBLE_LINKED_LIST_H_

#include "Platform_Types.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct Node{

    uint32 Data;
    struct Node *Next;
    struct Node *prev;

};


void insert_pos_start(struct Node **my_list);
void insert_pos_end(struct Node *my_list);
void insert_after_node(struct Node **my_list);
void display_nodes(struct Node *my_List);
void display_nodes_reverse(struct Node *my_List);
void delete_Start_node(struct Node **my_list);
void delete_end_node(struct Node **my_list);
void delete_pos_node(struct Node *my_list);
uint32 list_length(struct Node *my_list);
void reverse_list(struct Node **my_list);
void swap_nodes(struct Node **my_list);


#endif // _DOUBLE_LINKED_LIST_H_


