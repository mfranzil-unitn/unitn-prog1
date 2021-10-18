#include <iostream>
using namespace std;


void sum_rec(int n1[], int n2[], int risultato[], int dim, int index){
    if (index < dim){
        risultato[index] = n1[index] + n2[index];
        sum_rec(n1,n2,risultato,dim, index+1);
    }
}

void somma_array(int n1[], int n2[], int risultato[], int dim){
    sum_rec(n1,n2,risultato, dim, 0);
}

int main(){
    int n1[] = {1,2,3,4,5};
    int n2[] = {1,2,3,4,5};
    int result[5];
    int dim = 5;

    somma_array(n1,n2,result,dim);
    for(int i=0; i < dim; i++){
        cout << result[i] << endl;
    }
}

