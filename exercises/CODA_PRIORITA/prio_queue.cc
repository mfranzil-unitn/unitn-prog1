#include "prio_queue.h"

void priority_queue_init(priority_queue & pq)
{
  int i;
  for (i=0;i<MaxPriority;i++){
    init(pq.pqueue[i]);
  }
}

void priority_queue_deinit(priority_queue & pq)
{
  int i;
  for (i=0;i<MaxPriority;i++){
    deinit(pq.pqueue[i]);
  }
}

retval priority_queue_enqueue(message * m,priority_queue & pq) 
{
  retval res;
  int pr=m->priority;
  if (pr>MaxPriority)
    res = FAIL;
  else 
    res=enqueue(m,pq.pqueue[pr]);
  return res;
}

retval priority_queue_dequeue(message * & m,priority_queue & pq) 
{
  int pr;
  retval res = FAIL;
  for (pr=0;(pr<MaxPriority) &&(res==FAIL);pr++) 
    if (!emptyp(pq.pqueue[pr])) 
      res = dequeue(m,pq.pqueue[pr]);
  return res;
}
    
void priority_queue_print (const priority_queue & pq) 
{
  int pr;
  cout << "\nvvvvvvvvvvvvvvvvvvvvvvvvvv\n";
  for (pr=0;pr<MaxPriority;pr++) 
    if (!emptyp(pq.pqueue[pr])) {
      cout << "Priority " << pr << " :\n";
      print(pq.pqueue[pr]);
    }
  cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
}

  
  

	
