#include <iostream>
#include <fstream>
using namespace std;


int count_letter(const char* filename, const char letter){
    fstream in;
    in.open(filename, ios::in);
    if (in.fail()){
        return -1;
    }

    int count = 0;
    char c;
    while(in >> c){
        if (c == 'a'){
            count++;
        }
    }

    in.close();
    return count;
}

int main(){
    char c;
    cout << "Lettera da cercare: ";
    cin >> c;
    cout << "Number of 'a' = " << count_letter("text.txt", 'a') << endl;
    return 0;  
}
