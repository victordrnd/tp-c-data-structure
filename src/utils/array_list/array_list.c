#include "array_list.h"

/**
 * @brief  Init Array list
 * @param  l : 
 * @retval None
 */
void init_array_list(Array_list *l)
{
    l->index = 0;
}




/**
 * @brief  Insert value at position
 * @param  l : Array who will receive value 
 * @param  position : position of the insertion 
 * @param  value : Value to be added 
 * @retval None
 */
void insert_at(Array_list *l, int position, float value)
{
    if (position > l->index)
    {
        add(l, value);
    }
    else
    {
        for (int i = l->index; i >= position; i--)
        {
            l->data[i + 1] = l->data[i];
        }
        l->data[position] = value;
        l->index++;
    }
}



/**
 * @brief  Add value to the array
 * @param  l : Array list
 * @param  value : value to be added to the array list 
 * @retval None
 */
void add(Array_list *l, float value)
{
    l->data[l->index] = value;
    l->index++;
}



/**
 * @brief Remove value at position 
 * @param  l: array list 
 * @param  position : position to remove value 
 * @retval 
 */
float remove_at(Array_list *l, int position)
{
    float temp = l->data[position];
    for (int i = position; i < l->index; i++)
    {
        l->data[i] = l->data[i + 1];
    }
    l->index--;
    return temp;
}



/**
 * @brief return value at position  
 * @param  l : array list 
 * @param  position: Index of the value to be returned
 * @retval 
 */
float get_at(Array_list *l, int position)
{
    return l->data[position];
}



/**
 * @brief  Clear array list
 * @note   
 * @param  l : Array list to be cleared
 * @retval None
 */
void clear_array_list(Array_list *l)
{
    init_array_list(l);
}