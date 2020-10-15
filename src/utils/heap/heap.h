/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   heap.h
 * Author: aurelio
 *
 */

#include <stdbool.h>
#include <stdlib.h>

#ifndef HEAP_H
#define HEAP_H


#define HEAP_MAX_SIZE 100

typedef struct {
    float data[HEAP_MAX_SIZE];
    int index;
} Heap;


#endif

/**
 * @brief  Initialise le tas
 * @param  h : heap to inialize 
 * @retval None
 */
void init_heap(Heap *h);



/**
 * @brief  Check if heap is empty
 * @param  h: Heap to check  
 * @return bool 
 */
bool is_heap_empty(Heap *h);



/**
 * @brief  Pop the root value of the heap
 * @param  h : heap 
 * @retval float root
 */
float pop_heap(Heap *h);



/**
 * @brief  Add new value to the heap
 * @param  h : Heap to add value
 * @param  value : Value to add
 * @retval None
 */
void push_heap(Heap *h, float value);



/**
 * @brief  Replace the root of the heap
 * @param  h : heap 
 * @param  value :  
 * @retval 
 */
float replace(Heap *h, float value); // pop root and push a new key.




/**
 * @brief  Return root of the heap
 * @param  h : Heap
 * * @retval 
 */
float peek_heap(Heap *h); // return root value but dont remove it

//En option
void heapify(Heap *s, float array[], size_t array_size); //create Heap from array
//void merge(Heap *dest, Heap *src); //merge src into dest


