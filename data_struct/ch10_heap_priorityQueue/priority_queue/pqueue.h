/*
 * pqueue.h
 *
 *  Created on: Sep 2, 2014
 *      Author: Andy-Shao
 */

#ifndef PQUEUE_H_
#define PQUEUE_H_

#include "../heap/heap.h"

//Implement priority queues as heaps.
typedef Heap PQueue;

//Public Interface
#define pqueue_init heap_init
#define pqueue_destroy heap_destroy
#define pqueue_insert heap_insert
#define pqueue_extract heap_extract
#define pqueue_peek(pqueue) ((pqueue)->tree == NULL ? NULL : (pqueue)->tree[0])
#define pqueue_size heap_size

#endif /* PQUEUE_H_ */
