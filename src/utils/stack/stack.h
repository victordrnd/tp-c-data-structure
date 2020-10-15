

#include <stdbool.h>

#ifndef STACK_H
#define STACK_H

#define STACK_MAX_SIZE 100

typedef struct {
    float data[STACK_MAX_SIZE];
    int index;
} Stack;

#endif /* STACK_H */

/**
 * @brief Initialize new Stack  
 * @param  s : stack to initialized 
 * @retval None
 */
void init_stack(Stack *s);



/**
 * @brief Add value to the stack  
 * @param  s : stack to append new value 
 * @param  value : value to be appenned
 * @retval None
 */
void push(Stack *s, float value);


/**
 * @brief Remove last element from the stack  
 * @param  s : stack to be modified 
 * @retval 
 */
float pop(Stack *s);


/**
 * @brief  Check if stack is empty
 * @param  s : Stack to be checked 
 * @retval 
 */
bool is_stack_empty(Stack *s);

/**
 * @brief Return last element without removing it  
 * @param  s : stack to be traited 
 * @retval 
 */
float peek(Stack *s);

/**
 * @brief  Deplicate last value to the stack
 * @param  s : stack to be treated 
 * @retval None
 */
void dup(Stack *s);


/**
 * @brief Swap last value with before last from the stack
 * @param  s : Stack to be treated 
 * @retval None
 */
void swap(Stack *s);


/**
 * @brief  Clear the stack
 * @param  s : Stack to be cleared 
 * @retval None
 */
void clear(Stack *s);

