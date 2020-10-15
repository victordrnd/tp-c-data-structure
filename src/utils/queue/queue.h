#include <stdbool.h>

#ifndef QUEUE_H
#define QUEUE_H


#define QUEUE_MAX_SIZE 100

typedef struct {
    float data[QUEUE_MAX_SIZE];
    int index;
} Queue;


#endif /* QUEUE_H */


/**
 * @brief  Init queue
 * @param  q : queue to be initialized 
 * @retval None
 */
void init_queue(Queue *q);

/**
 * @brief Add value to the queue  
 * @param  q :  
 * @param  value: 
 * @retval None
 */
void enqueue(Queue *q, float value);


/**
 * @brief Return the first in queue   
 * @param  q : Concerned Queue
 * @retval 
 */
float dequeue(Queue *q);



/**
 * @brief  Check if queue is empty
 * @param  q : queue to be checked 
 * @retval 
 */
bool is_queue_empty(Queue *q);


/**
 * @brief return first in queue  
 * @param  q : Queue
 * @retval 
 */
float front(Queue *q); 



/**
 * @brief  Clear queue
 * @param  q Queue to be cleared
 * @retval None
 */
void clearq(Queue *q);

