#ifndef ENTRY_H
#define ENTRY_H

using namespace std;
#include <iostream>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <cctype>


const int MaxDim = 40;

enum EntryType {OPERATOR,NUM,OFF};
enum Operator {PLUS, MINUS, TIMES, DIVIDE};
enum retval {FAIL,OK};

struct entry 
{
  EntryType  type;
  Operator op;
  double num;
};


int offp (const entry &);
int operatorp (const entry &);
void print_entry (const entry &);
retval read_entry (entry &);
entry calcola(const entry & , const entry & , const entry & );

#endif
