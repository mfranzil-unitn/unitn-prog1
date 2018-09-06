#include <iostream>
#include "queue.h"


using namespace std;

static bool isempty(const queue &q)
{
    return q.head == NULL;
}

void init(queue &q)
{
    q.head = NULL;
    q.tail = NULL;
}

void deinit(queue &q)
{
    if(!isempty(q))
    {
        dequeue(q);
        deinit(q);
    }
}

bool enqueue (queue &q, float n)
{
    bool res;
    elem* tmp = new (nothrow) elem;
    if (tmp == NULL)
// RS: non e' un errore, ma abituatevi ad usare "true" e "false", non "1" e "0"
        res = 0;
    else
    {
        tmp->value = n;
//RS:  manca: tmp->next=NULL;
        if (q.tail == NULL)
        {
            q.tail = tmp;
            q.head = tmp;
        }
        else
        {
            q.tail->next = tmp;
            q.tail = tmp;
        }
        res = 1;
    }
    return res;
}

bool dequeue(queue &q)
{
    bool res;
    if (isempty(q))
        res = 0;
    else
    {      
        elem* tmp = q.head;
        q.head = q.head->next;
        delete tmp;
        res = 1;
    }
    return res;
}

bool first(const queue &q, float &out)
{
    bool res;
    if (isempty(q))
        res = 0;
    else
    {
        out = q.head->value;
        res = 1;
    }
    return res;
}

void print(const queue &q)
{
    queue t = q;
//RS: se la coda e' vuota, t.head->value et.head->next  non esistono
    
    cout << t.head->value << endl;
    while (t.head->next != NULL)
    {
        t.head = t.head->next;
        cout << t.head->value << endl;
    }
}
