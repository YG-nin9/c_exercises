#include "single_linked_list.h"


void insert_node_start(struct Node **my_list){

    struct Node *temp = NULL;
    temp = (struct Node *)malloc(sizeof(struct Node));

    if (temp != NULL){
        printf("Enter the data pls : \n");
        scanf("%i", &temp->Data);
    }

    if (*my_list == NULL){

        temp->Next_Node = NULL;
        *my_list = temp;
    }

    else{

        temp->Next_Node = *my_list;
        *my_list = temp;
    }
}

void insert_node_end(struct Node **my_list){

    struct Node *temp = NULL;
    struct Node *last = NULL;

    temp = (struct Node *)malloc(sizeof(struct Node));

    if (temp != NULL){
        printf("Enter the data pls : \n");
        scanf("%i", &temp->Data);
    }

    if (*my_list == NULL){

        temp->Next_Node = NULL;
        *my_list = temp;
    }

    else{

        last = *my_list;
        while(last->Next_Node != NULL){

            last = last->Next_Node;
        }

        last->Next_Node = temp;
        temp->Next_Node = NULL;
    }
}

void insert_after_node(struct Node *my_list){

    struct Node *temp = NULL;
    struct Node *before_node = my_list;
    uint32 node_pos = 0;
    uint32 list_len = list_length(my_list);
    uint32 counter = 1;

    here:
    printf("Enter the node position\n");
    scanf("%i", &node_pos);

    if(node_pos > list_len){
        printf("Error, list length is %i, try again\n", list_len);
        goto here;
    }
    else{

        while(counter < node_pos){

            counter++;
            before_node = before_node->Next_Node;
        }

        temp = (struct Node *)malloc(sizeof(struct Node));
        if(temp != NULL){

            printf("Enter the node data\n");
            scanf("%i", &temp->Data);
            temp->Next_Node = before_node->Next_Node;
            before_node->Next_Node = temp;
        }
    }
}

uint32 list_length(struct Node *my_list){

    uint32 len = 0;
    struct Node *temp = my_list;

    while(temp != NULL){

        len++;
        temp = temp->Next_Node;
    }

    return len;
}

void delete_node_start(struct Node **my_list){

    struct Node *temp = *my_list;
    uint32 len = list_length(*my_list);

    if(len == 0){
        printf("Empty linked list, nothing to delete\n");
    }
    else{
        *my_list = temp->Next_Node;
        temp->Next_Node = NULL;
        free(temp);
    }
}

void delete_pos_node(struct Node *my_list){

    struct Node *temp = my_list;
    struct Node *before_node = my_list;
    uint32 node_pos = 0;
    uint32 list_len = list_length(my_list);
    uint32 counter = 1;

    here:
    printf("Enter the node position\n");
    scanf("%i", &node_pos);

    if(node_pos > list_len){
        printf("Error, list length is %i, try again\n", list_len);
        goto here;
    }

    else if(node_pos == 1){

        printf("list length is 1, maybe better to use the 4 delete the first node option\n");
    }

    else{

        while(counter < (node_pos - 1)){

            counter++;
            before_node = before_node->Next_Node;
        }

            temp = before_node->Next_Node;
            before_node->Next_Node = temp->Next_Node;
            free(temp);
    }
}

void display_nodes(struct Node *my_list){

    struct Node *temp = my_list;

    if(temp == NULL){
        printf("Empty linked list\n");
    }
    else{

        printf("list values :");
        while(temp != NULL){

            printf("%i => ", temp->Data);
            temp = temp->Next_Node;

            if(temp == NULL){
                printf("NULL \n");
            }
        }
    }
}

void reverse_list(struct Node **my_list){

    struct Node *next = NULL;
    struct Node *current = *my_list;
    struct Node *previous = NULL;

    if(NULL == my_list) {
        printf("Error, empty list\n");
    }
    else if(list_length(*my_list) == 1){
        printf("Error, list is only one node\n");
    }
    else{

        while(current != NULL){

            next = current->Next_Node;
            current->Next_Node = previous;
            previous = current;
            current = next;
        }
        *my_list = previous;
    }
}

void nodes_swap(struct Node **my_list){

    struct Node *temp_1 = *my_list;
    struct Node *temp_2 = *my_list;
    uint32 pos_1 = 0, pos_2 = 0, current = 0;

    if(my_list == NULL){
        printf("Error, list is empty\n");
    }
    else if (list_length(*my_list) == 1){
        printf("Unable to swap, list is one node only");
    }else if(pos_1 == pos_2){
        printf("No swap needed to done\n");
    }
    else{
        printf("Enter the first node position\n");
        scanf("%i", &pos_1);
        printf("Enter the second node position\n");
        scanf("%i", &pos_2);

        for(uint32 i = 0; i < pos_1; i++){

            temp_1 = temp_1->Next_Node;
        }
        for(uint32 i = 0; i < pos_2; i++){

            temp_2 = temp_2->Next_Node;
        }
        current = temp_1->Data;
        temp_1->Data = temp_2->Data;
        temp_2->Data = current;
    }
}


