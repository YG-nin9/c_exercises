
#include "double_linked_list.h"



void insert_pos_start(struct Node **my_list){

    struct Node *temp = NULL;
    uint32 in;
    temp = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data\n");
    scanf("%i", &in);

    if(NULL != temp){

        temp->Data = in;

        if(NULL == *my_list){

            temp->prev = NULL;
            temp->Next = NULL;
            (*my_list) = temp;
        }
        else{

            temp->Next = (*my_list);
            temp->prev = NULL;
            (*my_list)->prev = temp;
            (*my_list) = temp;
        }
    }

    else{

        printf("Error, node can't be allocated\n");
    }
}

void insert_pos_end(struct Node *my_list){

    struct Node *temp = NULL;
    struct Node *locator = my_list;
    uint32 in;
    temp = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data\n");
    scanf("%i", &in);

    if(NULL != temp){

        temp->Data = in;
        temp->Next = NULL;

        while(NULL != locator->Next){

            locator = locator->Next;
        }

        temp->prev = locator;
        locator->Next = temp;
        }

    else{

        printf("Error, node can't be allocated\n");
    }
}

void insert_after_node(struct Node **my_list){

    struct Node *temp = NULL;
    struct Node *locator_1 = (*my_list);
    struct Node *locator_2 = NULL;
    uint32 pos = 0;
    uint32 n = 0;
    temp = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the position of the node\n");
    scanf("%i", &pos);
    printf("Enter the data\n");
    scanf("%i", &n);

    if(list_length(*my_list) < pos){

        printf("position is out of range, list is %i nodes\n", list_length(*my_list));
        printf("Add position in the range\n");
        scanf("%i", &pos);
    }

    if(NULL != temp){

        temp->Data = n;

        for(uint32 i = 1; i < pos; i++){

            locator_1 = locator_1->Next;
        }

        if(NULL == my_list){

            temp->prev = NULL;
            temp->Next = NULL;
            (*my_list) = temp;
        }

        else if (NULL == locator_1->Next){

            locator_1->Next = temp;
            temp->prev = locator_1;
            temp->Next = NULL;
        }

        else{

            locator_2 = locator_1->Next;
            locator_1->Next = temp;
            locator_2->prev = temp;
            temp->prev = locator_1;
            temp->Next = locator_2;
        }
    }
    else{

        printf("Error, node can't be allocated\n");
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
            temp = temp->Next;

            if(temp == NULL){
                printf("NULL \n");
            }
        }
    }
}

void display_nodes_reverse(struct Node *my_list){

    struct Node *temp = my_list;

    if(temp == NULL){
        printf("Empty linked list\n");
    }
    else{

        while(temp->Next != NULL){

            temp = temp->Next;
        }

        printf("Reversed list values :");

        while(temp != NULL){

            printf("%i => ", temp->Data);
            temp = temp->prev;
        }

        if(temp == NULL){
            printf("NULL \n");
        }
    }
}

void delete_Start_node(struct Node **my_list){

    struct Node *temp = *my_list;

    if(temp != NULL){

        if(my_list == NULL){
            printf("Error, Empty list\n");
        }
        else{

            (*my_list) = (*my_list)->Next;
            (*my_list)->prev = NULL;
            free(temp);
            temp = NULL;
        }
    }

}

void delete_end_node(struct Node **my_list){

    struct Node *temp = NULL;
    struct Node *locator = *my_list;

    if(NULL == my_list){
        printf("Error, empty list\n");
    }
    else{

        while(NULL != locator->Next){

            locator = locator->Next;
        }

        temp = locator;
        locator = locator->prev;
        locator->Next = NULL;
        temp->prev = NULL;
        temp->Next = NULL;
        free(temp);
    }
}

void delete_pos_node(struct Node *my_list){

    struct Node *temp = NULL;
    struct Node *locator = NULL;
    uint32 pos;

    here:
    printf("Enter the node position to be deleted\n");
    scanf("%i", &pos);

    if(NULL == my_list){
        printf("Error, empty list\n");
    }
    else{

        if(list_length(my_list) < pos){

            printf("Error, position out of range, list nodes are %i\n", list_length(my_list));
            goto here;
        }
        else if(pos == 1){
            printf("Use the delete start node option\n");
            return;
        }
        else{

            locator = my_list;
            while(pos > 1){

                locator = locator->Next;
                pos--;
            }

            if(locator->Next == NULL){

                temp = locator;
                locator = locator->prev;
                locator->Next = NULL;
                temp->prev = NULL;
                temp->Next = NULL;
                free(temp);
            }

            else{

                temp = locator->prev;
                temp->Next = locator->Next;
                locator->Next->prev = temp;
                free(locator);
                locator = NULL;
            }
        }
    }
}

uint32 list_length(struct Node *my_list){

    struct Node *temp = my_list;
    uint32 len = 1;

    if(NULL == my_list){
        return (len - 1);
    }

    else{

        while(NULL != temp->Next){

            temp = temp->Next;
            len++;
        }
    }

    return len;
}

void reverse_list(struct Node **my_list){

    struct Node *temp = *my_list;
    struct Node *rev = NULL;

    if(temp == NULL){
        printf("Empty linked list, can't be reversed\n");
    }
    else{

        while(temp->Next != NULL){

            temp = temp->Next;
        }

        rev = temp;
        (*my_list) = rev;

        while(temp != NULL){

            rev->Data = temp->Data;
            rev->Next = temp->prev;
            rev->prev = temp->Next;
            temp = temp->prev;
            rev = rev->Next;
        }
    }
}

void swap_nodes(struct Node **my_list){

    struct Node *temp_1 = *my_list;
    struct Node *temp_2 = *my_list;
    struct Node *holder = NULL;
    uint32 pos1, pos2;

    if(NULL == my_list){

        printf("Error, Empty list\n");
    }
    else{

        here:
        printf("Enter trhe position of the first node\n");
        scanf("%i", &pos1);
        printf("Enter the position of the second node\n");
        scanf("%i", &pos2);

        if((pos1 > list_length(*my_list)) || (pos2 > list_length(*my_list))){

            printf("Error, list nodes is %i \n", list_length(*my_list));
            goto here;
        }
        else{

            for(uint32 i = 1; i < pos1; i++){
                temp_1 = temp_1->Next;
            }

            for(uint32 i = 1; i < pos2; i++){
                temp_2 = temp_2->Next;
            }


            holder->Data = temp_1->Data;
            temp_1->Data = temp_2->Data;
            temp_2->Data = holder->Data;
        }
    }
}



