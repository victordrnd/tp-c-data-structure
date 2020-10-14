#include "queue.h"

void init_queue(Queue *q){
    q->index = 0;
}

void enqueue(Queue *q, float value){
    q->data[q->index] = value;
    q->index++;
}

float dequeue(Queue *q){
    float val = q->data[0];
    for(int i = 0; i < q->index; i++){
        q->data[i] = q->data[i+1];
    }
    q->index--;
    return val;
}

bool is_queue_empty(Queue *q){
    return q->index == 0;
}


float front(Queue *q){
    return q->data[0];
}


void clearq(Queue *q){
    init_queue(q);
}

