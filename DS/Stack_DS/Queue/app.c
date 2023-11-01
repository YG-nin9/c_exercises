#include "queue_DS.h"
#include "queue_DS.c"

queue_state_t ret_val = 0;
queue_t *Q_ONE;

uint32 num1 = 1;



int main()
{
    Q_ONE = q_create(&ret_val, MAX_SIZE);
    printf("front value => %i\n", Q_ONE->q_front);
    printf("ret val => %i\n", ret_val);
    printf("-------------------------------------------------\n");

    ret_val = q_enqueue(Q_ONE, &num1);
    printf("ret val => %i\n", ret_val);
    printf("front point => %i\n", Q_ONE->q_front);
    printf("rear point => %i\n", Q_ONE->q_rear);
    printf("count val => %i\n", Q_ONE->q_count);
    putchar('\n');
    ret_val = q_enqueue(Q_ONE, &num1);
    printf("ret val => %i\n", ret_val);
    printf("front point => %i\n", Q_ONE->q_front);
    printf("rear point => %i\n", Q_ONE->q_rear);
    printf("count val => %i\n", Q_ONE->q_count);
    putchar('\n');
    ret_val = q_enqueue(Q_ONE, &num1);
    printf("ret val => %i\n", ret_val);
    printf("front point => %i\n", Q_ONE->q_front);
    printf("rear point => %i\n", Q_ONE->q_rear);
    printf("count val => %i\n", Q_ONE->q_count);
    putchar('\n');
    printf("-------------------------------------------------\n");

    q_dequeue(Q_ONE, &ret_val);
    printf("ret val => %i\n", ret_val);
    printf("front point => %i\n", Q_ONE->q_front);
    printf("rear point => %i\n", Q_ONE->q_rear);
    printf("count val => %i\n", Q_ONE->q_count);
    q_dequeue(Q_ONE, &ret_val);
    printf("ret val => %i\n", ret_val);
    printf("front point => %i\n", Q_ONE->q_front);
    printf("rear point => %i\n", Q_ONE->q_rear);
    printf("count val => %i\n", Q_ONE->q_count);
    q_dequeue(Q_ONE, &ret_val);
    printf("ret val => %i\n", ret_val);
    printf("front point => %i\n", Q_ONE->q_front);
    printf("rear point => %i\n", Q_ONE->q_rear);
    printf("count val => %i\n", Q_ONE->q_count);
    q_dequeue(Q_ONE, &ret_val);
    printf("ret val => %i\n", ret_val);
    printf("front point => %i\n", Q_ONE->q_front);
    printf("rear point => %i\n", Q_ONE->q_rear);
    printf("count val => %i\n", Q_ONE->q_count);

    printf("-------------------------------------------------\n");




    printf("ret val => %i\n", q_delete(Q_ONE));
    printf("-------------------------------------------------\n");
    return 0;
}

