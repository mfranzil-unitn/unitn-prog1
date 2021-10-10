using namespace std;
#include <iostream> 
   
int main() 
{ //conversione di base 

   unsigned int cifra, num, base; 

   cout << "inserisci numero e base [2..10]: ";
   cin >> num >> base; 
   cout << "                    ";
   if (base>=2 && base<=10) 
      do { 
         cifra = num % base; 
         num /= base; 
         cout << "\b\b" << cifra; } 
      while (num!=0); 
   else 
      cout << "Base non valida!";
   cout << endl;
   return 0;
}
