#ifndef QUEUE_DS_H_INCLUDED
#define QUEUE_DS_H_INCLUDED
#include "Platform_Types.h"
#include <stdio.h>
#include <stdlib.h>


#define MAX_SIZE 4

typedef struct{

    void **q_arr;
    uint32 q_size;
    uint32 q_count;
    uint32 q_front;
    uint32 q_rear;

}queue_t;

typedef enum{

    Q_NOK = 0,
    Q_OK,
    Q_FULL,
    Q_EMPTY,
    Q_N_FULL,
    Q_NULL_POINTER

}queue_state_t;


queue_t *q_create(queue_state_t *ret_state, uint32 max_size);
queue_state_t q_delete(queue_t *my_queue);
queue_state_t q_enqueue(queue_t *my_queue, void *data);
void *show_rear(queue_t *my_queue, queue_state_t ret_state);
void *show_front(queue_t *my_queue, queue_state_t ret_state);
void *q_dequeue(queue_t *my_queue, queue_state_t *ret_state);


#endif // QUEUE_DS_H_INCLUDED

