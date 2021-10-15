#include <iostream>
using namespace std;


bool is_even(int n){
    return n % 2 == 0;
}

void eval(int n1, int n2){
    if(is_even(n1)){
        if (is_even(n2)){
            cout << n1 + n2 << endl;
        } else {
            cout << n1 * n2 << endl;
        }
    } else {
        if (is_even(n2)){
            cout << n1 * n2 << endl;
        } else {
            cout << (double)(n1 - n2)/(n1*n2) << endl;
        }
    }

}

int main(){
    int n1, n2;
    cout << "inserire due numeri interi:\n";
    cin >> n1 >> n2;
    eval(n1,n2);
    return 0;
}