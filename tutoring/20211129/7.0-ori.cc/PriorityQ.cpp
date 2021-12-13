#include "PriorityQ.h"

#include <iostream>

using std::cout;
using std::endl;

struct fake_pair{
    node* first;
    int second;
};

priorityQueue *init(int dim) {
    priorityQueue *pq = new priorityQueue;
    pq->queue = new node *[dim];
    for (int i = 0; i < dim; i++) {
        pq->queue[i] = nullptr;
    }
    pq->dim = dim;
    return pq;
}


void enqueue(priorityQueue &pq, int value, int priority) {
    if(priority >= pq.dim && priority < 0){
        cout << "No priority " << priority << " exists" << endl;
    } else {
        if (pq.queue[priority] == nullptr) {
            pq.queue[priority] = new node;
            pq.queue[priority]->value = value;
        } else {
            node *curr_node = pq.queue[priority];
            while (curr_node->right != nullptr) {
                curr_node = curr_node->right;
            }
            node *new_node = new node;
            new_node->value = value;
            curr_node->right = new_node;
            new_node->left = curr_node;
        }
    }
}



fake_pair find_priority_not_empty(priorityQueue &pq) {
    node *q = nullptr;
    fake_pair retval;
    int i = 0;
    while (q == nullptr && i < pq.dim) {
        q = pq.queue[i];
        i++;
    }
    retval.first = q;
    retval.second = i - 1;
    return retval;
}

int dequeue(priorityQueue &pq) {
    int retval = -1;
    fake_pair res = find_priority_not_empty(pq);
    node *curr_node = res.first;
    int p = res.second;
    node *temp;
    if (curr_node != nullptr) {
        retval = curr_node->value;
        temp = curr_node;
        curr_node = temp->right;
        pq.queue[p] = curr_node;
        delete temp;
    }
    return retval;
}

void dealloc(priorityQueue& pq){
    node* curr_node;
    for(int i = 0; i < pq.dim; i++){
        curr_node = pq.queue[i];
        while (curr_node != nullptr){
            auto temp = curr_node;
            curr_node = curr_node->right;
            delete temp;
        }
    }
    delete [] pq.queue;
}

void print(priorityQueue &pq) {
    node *visiting_node;
    for (int i = 0; i < pq.dim; i++) {
            cout << "Priority " << i <<  " -> [";
            visiting_node = pq.queue[i];
            if (visiting_node == nullptr) {
                cout << "]" << endl;
            } else {
                while (visiting_node != nullptr) {
                    cout << visiting_node->value << ", ";
                    visiting_node = visiting_node->right;
                }
                cout << "]" <<endl;
            }
        }
    cout << endl;
}