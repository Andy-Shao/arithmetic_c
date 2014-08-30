#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>

#include "../../ch05_list/single_list/list.h"

//Implement queues as linked lists.
typedef List Queue;

//Public Interface
#define queue_init list_init
#define queue_destroy list_destroy

int queue_enqueue(Queue *queue, const void *data);
int queue_dequeue(Queue *queue, void **data);

#define queue_peek(queue) ((queue)->head == NULL ? NULL : (queue)->head->data)
#define queue_size list_size

#endif
