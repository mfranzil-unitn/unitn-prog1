using namespace std; 

#include <iostream>  

int main ()         
{

int i; int *pi=&i;
char c; char *pc=&c;
void *tp;
tp = pi;       // punta a int
*(int*)tp=3;
cout << "*tp = " << *(int*)tp << endl;

tp = pc;       // punta a char
*(char*)tp='C';
cout << "*tp = " << *(char*)tp << endl;

return 0;            
}
