#include "stack.h"

void init_stack(Stack *s)
{
    (*s).index = 0;
}

void push(Stack *s, float value)
{
    (*s).data[(*s).index] = value;
    (*s).index++;
}

float pop(Stack *s)
{
    float value = (*s).data[(*s).index - 1];
    (*s).index--;
    return value;
}

bool is_stack_empty(Stack *s)
{
    return (*s).index == 0;
}

float peek(Stack *s)
{
    return (*s).data[(*s).index - 1];
}

void dup(Stack *s)
{
    (*s).data[(*s).index] = (*s).data[(*s).index - 1];
    (*s).index++;
}

void swap(Stack *s)
{
    if ((*s).index > 1)
    {
        float temp = (*s).data[(*s).index - 1];
        (*s).data[(*s).index - 1] = (*s).data[(*s).index - 2];
        (*s).data[(*s).index - 2] = temp;
    }
}

void clear(Stack *s){
    init_stack(s);
}