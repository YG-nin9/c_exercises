#include "Stack_DS.h"
#include "Stack_DS.c"

uint32 state = 0;
uint32 poped;
uint32 top_data;
uint32 size = 0;

int main()
{
    StackInit(&Stack_One);
    printf(" the pointer is now %i\n", Stack_One.Sptr);
    printf("=============================================\n");

    state = Stack_State(&Stack_One);
    printf(" the state is %i\n", state);
    printf("=============================================\n");

    StackPush(&Stack_One, 5);
    printf(" pointer is %i\n", Stack_One.Sptr);
    printf("the data is %i\n", Stack_One.data[Stack_One.Sptr]);

    StackPush(&Stack_One, 6);
    printf("pointer is %i\n", Stack_One.Sptr);
    printf("the data is %i\n", Stack_One.data[Stack_One.Sptr]);

    StackPush(&Stack_One, 7);
    printf("pointer is %i\n", Stack_One.Sptr);
    printf("the data is %i\n", Stack_One.data[Stack_One.Sptr]);

    StackPush(&Stack_One, 8);
    printf("pointer is %i\n", Stack_One.Sptr);
    printf("the data is %i\n", Stack_One.data[Stack_One.Sptr]);
    printf("=============================================\n");

    StackPop(&Stack_One, &poped);
    printf("pointer is %i\n", Stack_One.Sptr);
    printf("the data now is %i\n", Stack_One.data[Stack_One.Sptr]);
    printf("the poped data is  %i\n", poped);

    printf("=============================================\n");

    StackTop(&Stack_One, &top_data);
    printf("pointer is %i\n", Stack_One.Sptr);
    printf("the top data is  %i\n", top_data);
    printf("=============================================\n");

    size = StackSize(&Stack_One);
    printf("size is %i\n", size);
    printf("=============================================\n");

    StackDisplay(&Stack_One);
    printf("=============================================\n");

    return 0;
}


