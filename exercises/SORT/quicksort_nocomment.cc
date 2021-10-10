using namespace std;
#include <iostream>
#include <iomanip>

const int MAXDIM = 100;

void swap (int & a, int & b) 
{
  int c = a;
  a = b;
  b = c;
}

void printarray(int v[],int min,int max) 
{
  int i;
  cout << "[";
  for (i=min;i<=max;i++) {
    cout << v[i] << " ";
  }
  cout << "]\n";
}

void quicksort1(int v[], int primo, int ultimo) {

   if (primo < ultimo) {
      int p = primo;
      int u = ultimo;
      int pivot = v[ultimo];

      do {
         while ((p < u) && (v[p] <= pivot)) 
	   p++;
         while ((u > p) && (v[u] >= pivot))
	   u--;
         if (p < u) 
	    swap(v[p],v[u]);
      } while (p < u);

      swap(v[p],v[ultimo]);

      quicksort1(v, primo, p-1);
      quicksort1(v, p+1, ultimo);
   } 
}



void quicksort (int v[],int n) 
{
  quicksort1 (v,0,n-1);
}

int main () 
{
  //  const int dim = 8;
  int myarray[MAXDIM] = 
    {
//       7,6,5,4,3,2,1
  10,3,9,1,5,17,6,41,20,37,2,8,23,0,11,19
//  41,3,9,1,5,17,6,20,37,2,8,23,10,0,11,19
//  11,12,13,14,15,16,1,2,3,4,5,6,7,8,9,10
    };

  int dim = 16;
   
  printarray(myarray,0,dim-1);
  cout << endl;
  quicksort(myarray,dim);
  printarray(myarray,0,dim-1);
}

  
  
