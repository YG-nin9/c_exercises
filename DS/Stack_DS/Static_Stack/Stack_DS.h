#ifndef STACK_DS_H_INCLUDED
#define STACK_DS_H_INCLUDED
#include "Platform_Types.h"
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 3
#define DEBUG

typedef struct{

    uint32 Sptr;
    uint32 data[STACK_SIZE];

}StackBody;

typedef enum stackk{

    STACK_EMPTY = - 1,
    STACK_FULL = STACK_SIZE - 1,

}Stack_Status;

typedef enum status{

    done,
    ndone,
}Ret_Status;

/**
 * \brief : initialize the function to set it and set the pointer value to -1
 *
 * \param : address to the stack to be initialized
 *
 * \return : out the done0 or ndone 1
 *
 */
Ret_Status StackInit(StackBody *Stack_One);

/**
 * \brief : get back the stack state
 *
 * \param : address to the stack to be checked
 *
 * \return : out the empty stack -1 or full stack 1
 *
 */
Stack_Status Stack_State(StackBody *My_Stack);

/**
 * \brief : push data into the stack
 *
 * \param : address to the stack
 * \param : address to the pushed data
 *
 * \return : out the done0 or ndone 1
 *
 */
Ret_Status StackPush(StackBody *My_Stack, uint32 value);

/**
 * \brief : pop data from the stack
 *
 * \param : address to the stack
 * \param : address to the poped data from the stack
 *
 * \return : out the done0 or ndone 1
 *
 */
Ret_Status StackPop(StackBody *My_Stack, uint32 *value);

/**
 * \brief : view the top satck
 *
 * \param : address to the stack
 * \param : address to the top viewed data of stack
 *
 * \return : out the done0 or ndone 1
 *
 */
Ret_Status StackTop(StackBody *My_Stack, uint32 *value);

/**
 * \brief : view and get the size of the stack
 *
 * \param : address to the stack
 *
 * \return : out the done0 or ndone 1
 *
 */
Ret_Status StackSize(StackBody *My_Stack);

/**
 * \brief : view and get the size of the stack
 *
 * \param : address to the stack
 *
 * \return : out the done0 or ndone 1
 *
 */
Ret_Status StackDisplay(StackBody *My_Stack);

#endif // STACK_DS_H_INCLUDED

