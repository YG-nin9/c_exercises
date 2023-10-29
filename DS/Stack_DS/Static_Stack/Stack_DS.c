#include "Stack_DS.h"

StackBody Stack_One;

/**
 * \brief : initialize the function to set it and set the pointer value to -1
 *
 * \param : address to the stack to be initialized
 *
 * \return : out the done0 or ndone 1
 *
 */
Ret_Status StackInit(StackBody *My_Stack){

    uint32 ret = 0;

    if(NULL == My_Stack){
        ret = 1;
        #ifndef DEBUG
        printf("NULL Stack, pls create a stack obj first");
        #endif // DEBUG
    }
    else{
        Stack_One.Sptr = STACK_EMPTY;
    }

    return ret;
}

/**
 * \brief : get back the stack state
 *
 * \param : address to the stack to be checked
 *
 * \return : out the empty stack -1 or full stack 1
 *
 */
Stack_Status Stack_State(StackBody *My_Stack){

    uint32 state = 0;

    if(NULL == My_Stack){
        printf("Stack is not initialized yet\n");
        exit(0);
    }
    else{

        if(Stack_One.Sptr == STACK_FULL){
            state = STACK_FULL;
            #ifndef DEBUG
            printf("Stack is full\n");
            #endif // DEBUG
        }
        else if (Stack_One.Sptr == STACK_EMPTY){
            state = STACK_EMPTY;
            #ifndef DEBUG
            printf("Stack is empty\n");
            #endif // DEBUG
        }
        else{
            #ifndef DEBUG
            printf("Stack is not full\n");
            #endif // DEBUG
        }
    }

    return state;
}

/**
 * \brief : push data into the stack
 *
 * \param : address to the stack
 * \param : address to the pushed data
 *
 * \return : out the done0 or ndone 1
 *
 */
Ret_Status StackPush(StackBody *My_Stack, uint32 value){

    uint32 state = 0;
    state =  Stack_State(My_Stack);
    if(state == STACK_FULL){
        #ifndef DEBUG
        printf("Stack is full, no push is allowed\n");
        #endif // DEBUG
        return ndone;
    }
    else{
        Stack_One.Sptr++;
        Stack_One.data[Stack_One.Sptr] = value;
        #ifndef DEBUG
        printf("%i pushed successfully\n",value);
        #endif // DEBUG
    }

    return done;
}

/**
 * \brief : pop data from the stack
 *
 * \param : address to the stack
 * \param : address to the poped data from the stack
 *
 * \return : out the done0 or ndone 1
 *
 */
Ret_Status StackPop(StackBody *My_Stack, uint32 *value){

    uint32 state = 0;
    state =  Stack_State(My_Stack);
    if(state == STACK_EMPTY){
        #ifndef DEBUG
        printf("Stack is empty, no pop is allowed\n");
        #endif // DEBUG
        return ndone;
    }
    else{
        *value = Stack_One.data[Stack_One.Sptr];
        Stack_One.Sptr--;
        #ifndef DEBUG
        printf("%i poped successfully\n",value);
        #endif // DEBUG
    }

    return done;
}

/**
 * \brief : view the top satck
 *
 * \param : address to the stack
 * \param : address to the top viewed data of stack
 *
 * \return : out the done0 or ndone 1
 *
 */
Ret_Status StackTop(StackBody *My_Stack, uint32 *value){

    uint32 state = 0;
    state =  Stack_State(My_Stack);
    if(state == STACK_EMPTY){
        #ifndef DEBUG
        printf("Stack is empty, no data in it\n");
        #endif // DEBUG
        printf("pointer data is NULL due to empty stack\n");
        return ndone;
    }
    else{
        *value = Stack_One.data[Stack_One.Sptr];
        #ifndef DEBUG
        printf("%i viewed successfully\n",value);
        #endif // DEBUG
    }

    return done;
}

/**
 * \brief : view and get the size of the stack
 *
 * \param : address to the stack
 *
 * \return : out the done0 or ndone 1
 *
 */
Ret_Status StackSize(StackBody *My_Stack){

    uint32 state = 0;
    uint32 size = 0;
    state =  Stack_State(My_Stack);
    if(state == STACK_EMPTY){
        #ifndef DEBUG
        printf("Stack is empty\n");
        #endif // DEBUG
        return size;
    }
    else{
        size = Stack_One.Sptr + 1;
        #ifndef DEBUG
        printf("size is %i\n",size);
        #endif // DEBUG
    }

    return size;
}

/**
 * \brief : display the stack elements
 *
 * \param : address to the stack
 *
 * \return : out the done0 or ndone 1
 *
 */
Ret_Status StackDisplay(StackBody *My_Stack){

    uint32 state = 0;
    uint32 counter = 0;
    state =  Stack_State(My_Stack);
    if(state == STACK_EMPTY){
        #ifndef DEBUG
        printf("Stack is empty, no thing to be viewed\n");
        #endif // DEBUG
        return ndone;
    }
    else{
        while(Stack_One.Sptr - counter != STACK_EMPTY){

            printf("%i\t", Stack_One.data[Stack_One.Sptr - counter]);
            counter++;
        }
        printf("\n");
        #ifndef DEBUG
        printf("End of the stack\n");
        #endif // DEBUG
    }

    return done;
}


