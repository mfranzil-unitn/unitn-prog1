using namespace std;

#include <iostream>
#include "../6.4-ori/stack.h"

void init(stack &s) {
    s = NULL;
}

void deinit(stack &s) {
    node *n = s;
    while (n != NULL) {
        node *tmp = n;
        n = n->next;
        delete tmp;
    }
    s = NULL;
}

retval empty(const stack &s) {
    return (s == NULL ? TRUE : FALSE);
}

void push(stack &s, int val) {
    node *n = new node;
    n->val = val;
    n->next = s;
    s = n;
}

retval pop(stack &s) {
    retval res = FALSE;
    if (!empty(s)) {
        node *first = s;
        s = s->next;
        delete first;
        res = TRUE;
    }
    return res;
}

retval top(const stack &s, int &result) {
    retval res = FALSE;
    if (!empty(s)) {
        result = s->val;
        res = TRUE;
    }
    return res;
}

void print(const stack &s) {
    node *n = s;
    while (n != NULL) {
        cout << n->val << " ";
        n = n->next;
    }
    cout << endl;
}