#include <iostream>
using namespace std;

/*

1) Scrivere una funzione ricorsiva che vada calcolare la somma tra due numeri. Ovviamente scrivere 'return n1 + n2;' è vietato
2) Riscrivere la funzione precedente utilizando la ricorsione in coda

*/


int sum(const int num1, int num2){
    
    int retval;
    
    if (num2 == 0){
        retval = num1;
    } else {
        retval = 1 + sum(num1, num2 - 1);
    }

    return retval;
}

int sum_tail(int num1, int num2){
    
    int retval;

    if (num2 == 0){
        retval = num1;
    } else {
        retval = sum_tail(num1 + 1, num2 - 1);
    }

    return retval;
}



int main(){
    int n1, n2;
    cout << "Inserire due numeri: ";
    cin >> n1 >> n2;
    cout << "Somma: " << sum(n1, n2) << endl;
    cout << "Somma: " << sum_tail(n1, n2) << endl;
    return 0;
}