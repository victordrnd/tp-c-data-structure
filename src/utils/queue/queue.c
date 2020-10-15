#include "queue.h"

/**
 * @brief  Init queue
 * @param  q : queue to be initialized 
 * @retval None
 */
void init_queue(Queue *q)
{
    q->index = 0;
}



/**
 * @brief Add value to the queue  
 * @param  q :  
 * @param  value: 
 * @retval None
 */
void enqueue(Queue *q, float value)
{
    for (int i = q->index; i >= 0; i--)
    {
        q->data[i + 1] = q->data[i];
    }
    q->data[0] = value;
    q->index++;
}



/**
 * @brief Return the first in queue   
 * @param  q : Concerned Queue
 * @retval 
 */
float dequeue(Queue *q)
{
    float val = q->data[q->index-1];
    q->index--;
    return val;
}



/**
 * @brief  Check if queue is empty
 * @param  q : queue to be checked 
 * @retval 
 */
bool is_queue_empty(Queue *q)
{
    return q->index == 0;
}


/**
 * @brief return first in queue  
 * @param  q : Queue
 * @retval 
 */
float front(Queue *q)
{
    return q->data[q->index-1];
}


/**
 * @brief  Clear queue
 * @param  q Queue to be cleared
 * @retval None
 */
void clearq(Queue *q)
{
    init_queue(q);
}
