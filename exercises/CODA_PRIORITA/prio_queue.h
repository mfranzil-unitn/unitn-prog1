#ifndef PRIO_QUEUE_H
#define PRIO_QUEUE_H

#include "message.h"
#include "struct_queue.h"

const int MaxPriority = 10;

// Priority:
// most important: 0
// least important: 9
struct priority_queue 
{
  queue pqueue[MaxPriority];
};

void priority_queue_init(priority_queue &);
void priority_queue_deinit(priority_queue &);
retval priority_queue_enqueue(message *,priority_queue &);
retval priority_queue_dequeue(message *&,priority_queue &);
void priority_queue_print (const priority_queue &);

#endif
