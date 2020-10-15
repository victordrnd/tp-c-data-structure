#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#define ARRAY_LIST_MAX_SIZE 100

typedef struct {
    float data[ARRAY_LIST_MAX_SIZE];
    int index;
} Array_list;


#endif


/**
 * @brief  Init Array list
 * @param  l : 
 * @retval None
 */
void init_array_list(Array_list *l);



/**
 * @brief  Insert value at position
 * @param  l : Array who will receive value 
 * @param  position : position of the insertion 
 * @param  value : Value to be added 
 * @retval None
 */
void insert_at(Array_list *l, int position, float value);


/**
 * @brief  Add value to the array
 * @param  l : Array list
 * @param  value : value to be added to the array list 
 * @retval None
 */
void add(Array_list *l, float value);



/**
 * @brief Remove value at position 
 * @param  l: array list 
 * @param  position : position to remove value 
 * @retval 
 */
float remove_at(Array_list *l, int position);


/**
 * @brief return value at position  
 * @param  l : array list 
 * @param  position: Index of the value to be returned
 * @retval 
 */
float get_at(Array_list *l,int position);



/**
 * @brief  Clear array list
 * @note   
 * @param  l : Array list to be cleared
 * @retval None
 */
void clear_array_list(Array_list *l);



