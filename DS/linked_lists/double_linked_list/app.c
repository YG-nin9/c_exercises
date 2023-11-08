
#include "double_linked_list.h"
#include "double_linked_list.c"

struct Node *DLL = NULL;
uint32 len = 0;

int main()
{
    uint32 UserChoice = 0;
    uint32 ListLength = 0;

    printf("-> Hello to Double Linked List \n");
    while(1){

        Sleep(250);
        printf("\n");
        printf("===============================\n");
        printf("-> 1) add node at the start \n");
        //Sleep(250);
        printf("-> 2) add node at the end \n");
        //Sleep(250);
        printf("-> 3) add node after position \n");
        //Sleep(250);
        printf("-> 4) delete the first node \n");
        //Sleep(250);
        printf("-> 5) delete the last node \n");
        //Sleep(250);
        printf("-> 6) delete specified node \n");
        //Sleep(250);
        printf("-> 7) display nodes \n");
        //Sleep(250);
        printf("-> 8) display nodes in reverse \n");
        //Sleep(250);
        printf("-> 9) get the list length \n");
        //Sleep(250);
        printf("-> 10) reverse the list \n");
        //Sleep(250);
        printf("-> 11) swap two nodes \n");
        //Sleep(250);
        printf("-> 12) Exit \n");
        printf("===============================\n");
        //Sleep(250);

        printf("\n");
        printf("UserChoice : ");
        scanf("%i", &UserChoice);

        switch(UserChoice){
            case 1:
                insert_pos_start(&DLL);
            break;
            case 2:
                insert_pos_end(DLL);
            break;
            case 3:
                insert_after_node(&DLL);
            break;
            case 4:
                delete_Start_node(&DLL);
            break;
            case 5:
                delete_end_node(&DLL);
            break;
            case 6:
                delete_pos_node(DLL);
            break;
            case 7:
                display_nodes(DLL);
            break;
            case 8:
                display_nodes_reverse(DLL);
            break;
            case 9:
                ListLength = list_length(DLL);
                printf("List Nodes : %i  Nodes\n", ListLength);
            break;
            case 10:
                reverse_list(&DLL);
                break;
            case 11:
                swap_nodes(&DLL);
                break;
            case 12:
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



