
#include "single_linked_list.h"

struct Node *SLL = NULL;
uint32 len = 0;

int main()
{
    uint32 UserChoice = 0;
    uint32 ListLength = 0;

    printf("-> Hello to Single Linked List \n");
    while(1){

        Sleep(250);
        printf("\n");
        printf("===============================\n");
        printf("-> 1) add node at the start \n");
        Sleep(250);
        printf("-> 2) add node at the end \n");
        Sleep(250);
        printf("-> 3) add node after position \n");
        Sleep(250);
        printf("-> 4) delete the first node \n");
        Sleep(250);
        printf("-> 5) delete specified node \n");
        Sleep(250);
        printf("-> 6) display nodes \n");
        Sleep(250);
        printf("-> 7) get the list length \n");
        Sleep(250);
        printf("-> 8) reverse the list \n");
        Sleep(250);
        printf("-> 9) swap two nodes \n");
        Sleep(250);
        printf("-> 10) Exit \n");
        printf("===============================\n");
        Sleep(250);

        printf("\n");
        printf("UserChoice : ");
        scanf("%i", &UserChoice);

        switch(UserChoice){
            case 1:
                insert_node_start(&SLL);
            break;
            case 2:
                insert_node_end(&SLL);
            break;
            case 3:
                insert_after_node(SLL);
            break;
            case 4:
                delete_node_start(&SLL);
            break;
            case 5:
                delete_pos_node(SLL);
            break;
            case 6:
                display_nodes(SLL);
            break;
            case 7:
                ListLength = list_length(SLL);
                printf("List Nodes : %i  Nodes\n", ListLength);
            break;
            case 8:
                reverse_list(&SLL);
                break;
            case 9:
                nodes_swap(&SLL);
                break;
            case 10:
                printf("Program endded \n");
                exit(1);
            break;
            default:
                printf("User Choice out of range !!\n");
            break;
        }
    }

    return 0;
}



