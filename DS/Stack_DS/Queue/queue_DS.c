#include "queue_DS.h"

queue_t *q_create(queue_state_t *ret_state, uint32 max_size){

    queue_t *my_queue;
    my_queue = (queue_t *)malloc(sizeof(queue_t));

    if(NULL == my_queue){
        *ret_state = Q_NULL_POINTER;
        my_queue = NULL;
    }
    else{
        my_queue->q_arr = (void **)calloc(max_size, sizeof(void *));
        if(NULL == my_queue->q_arr){
            *ret_state = Q_NOK;
            my_queue = NULL;
        }
        else{

            my_queue->q_front = -1;
            my_queue->q_rear = -1;
            my_queue->q_size = max_size;
            my_queue->q_count = 0;
            *ret_state = Q_OK;
        }
    }
    return my_queue;
}

queue_state_t q_delete(queue_t *my_queue){

    queue_state_t ret_state = Q_NOK;

    if(NULL == my_queue){
        ret_state = Q_NULL_POINTER;
        my_queue = NULL;
    }
    else{
        if(NULL == my_queue->q_arr){
            ret_state = Q_NOK;
        }
        else{
            free(my_queue->q_arr);
            free(my_queue);
            ret_state = Q_OK;
        }
    }
    return ret_state;
}

static queue_state_t Q_check(queue_t *my_queue){

    queue_state_t ret_state = Q_NOK;
    if(NULL == my_queue){
        ret_state = Q_NULL_POINTER;
    }
    else{
        if(my_queue->q_size == my_queue->q_count){
            ret_state = Q_FULL;
        }
        else if((my_queue->q_front == -1) && (my_queue->q_rear == -1)){
            ret_state = Q_EMPTY;
        }
        else{
            ret_state = Q_N_FULL;
        }
    }
    return ret_state;
}

queue_state_t q_enqueue(queue_t *my_queue, void *data){

    queue_state_t ret_state = Q_NOK;

    if((NULL == my_queue) || (NULL == data)){
        ret_state = Q_NULL_POINTER;
        my_queue = NULL;
    }
    else{
        ret_state = Q_check(my_queue);
        if(Q_N_FULL == ret_state){
            (my_queue->q_rear)++;

            if(my_queue->q_rear == my_queue->q_size){
                my_queue->q_rear = 0;
            }
            else{
                /* nothing */
            }
            (my_queue->q_count)++;
            my_queue->q_arr[my_queue->q_rear] = data;
            ret_state = Q_OK;
        }
        else if (Q_EMPTY == ret_state){
            (my_queue->q_front)++;
            (my_queue->q_rear)++;
            (my_queue->q_count)++;
            my_queue->q_arr[my_queue->q_rear] = data;
            ret_state = Q_OK;
        }
        else{
            ret_state = Q_NOK;
        }
    }
    return ret_state;
}

void *show_rear(queue_t *my_queue, queue_state_t ret_state){

    ret_state = Q_check(my_queue);
    void *r_data = NULL;

    if(ret_state == Q_EMPTY){
        printf("queue is empty\n");
    }
    else{
        r_data = my_queue->q_arr[my_queue->q_rear];
        ret_state = Q_OK;
    }
    return r_data;
}

void *show_front(queue_t *my_queue, queue_state_t ret_state){

    ret_state = Q_check(my_queue);
    void *f_data = NULL;

    if(ret_state == Q_EMPTY){
        printf("queue is empty\n");
    }
    else{
        f_data = my_queue->q_arr[my_queue->q_front];
        ret_state = Q_OK;
    }
    return f_data;
}

void *q_dequeue(queue_t *my_queue, queue_state_t *ret_state){

    void *dequeued = NULL;
    queue_state_t state = Q_NOK;

    if(NULL == my_queue){
        state = Q_NULL_POINTER;
        my_queue = NULL;
    }
    else{
        state = Q_check(my_queue);
        if((Q_N_FULL == state) || (Q_FULL == state)){

            if((my_queue->q_front == my_queue->q_rear) && (my_queue->q_count)){

                my_queue->q_arr[my_queue->q_front] = &dequeued;
                my_queue->q_front = -1;
                my_queue->q_rear = -1;
                (my_queue->q_count)--;
                state = Q_OK;
                return dequeued;
            }
            else{
                (my_queue->q_arr[my_queue->q_front]) = &dequeued;
                (my_queue->q_front)++;

                if(my_queue->q_front == my_queue->q_size){
                    my_queue->q_front = 0;
                }
                else{
                }
                (my_queue->q_count)--;
                state = Q_OK;
            }
        }
        else{
            state = Q_NOK;
        }
    }
    return dequeued;
}


