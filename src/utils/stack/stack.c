#include "stack.h"


/**
 * @brief Initialize new Stack  
 * @param  s : stack to initialized 
 * @retval None
 */
void init_stack(Stack *s)
{
    (*s).index = 0;
}


/**
 * @brief Add value to the stack  
 * @param  s : stack to append new value 
 * @param  value : value to be appenned
 * @retval None
 */
void push(Stack *s, float value)
{
    (*s).data[(*s).index] = value;
    (*s).index++;
}

/**
 * @brief Remove last element from the stack  
 * @param  s : stack to be modified 
 * @retval 
 */
float pop(Stack *s)
{
    float value = (*s).data[(*s).index - 1];
    (*s).index--;
    return value;
}


/**
 * @brief  Check if stack is empty
 * @param  s : Stack to be checked 
 * @retval 
 */
bool is_stack_empty(Stack *s)
{
    return (*s).index == 0;
}


/**
 * @brief Return last element without removing it  
 * @param  s : stack to be traited 
 * @retval 
 */
float peek(Stack *s)
{
    return (*s).data[(*s).index - 1];
}


/**
 * @brief  Deplicate last value to the stack
 * @param  s : stack to be treated 
 * @retval None
 */
void dup(Stack *s)
{
    (*s).data[(*s).index] = (*s).data[(*s).index - 1];
    (*s).index++;
}

/**
 * @brief Swap last value with before last from the stack
 * @param  s : Stack to be treated 
 * @retval None
 */
void swap(Stack *s)
{
    if ((*s).index > 1)
    {
        float temp = (*s).data[(*s).index - 1];
        (*s).data[(*s).index - 1] = (*s).data[(*s).index - 2];
        (*s).data[(*s).index - 2] = temp;
    }
}


/**
 * @brief  Clear the stack
 * @param  s : Stack to be cleared 
 * @retval None
 */
void clear(Stack *s){
    init_stack(s);
}