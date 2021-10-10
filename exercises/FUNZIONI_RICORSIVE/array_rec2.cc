using namespace std;
#include <iostream>

int depth = 0;

void printspaces(int n) 
{ 
  for (int i=0;i<n;i++)
    cout << "   "; 
}


double rec_array_sum(double myarray[],int min,int max)
{
  double res;

depth++;
printspaces(depth); 
cout << "> rec_array_sum(array," << min << "," << max << ")\n";

  if (min>max) 
    res=0.0;
  else if (min==max) 
    res = myarray[min];
  else 
    res = rec_array_sum(myarray,min,max-1)+myarray[max];

printspaces(depth); 
cout << "< " <<  res << endl;
depth--;

  return res;
}

double array_sum (double myarray[],int max) 
{
  double res;
cout << "sum: max = " << max << endl;
  res = rec_array_sum(myarray,0,max-1);
cout << "sum(" << max << ") e' " << res << endl;
  return res;
}

int main () 
{
  const int dim=10;
  double myarray[dim] = 
  {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
  
  cout << "La somma e' " << array_sum(myarray,dim) << endl;
return 0;
}

