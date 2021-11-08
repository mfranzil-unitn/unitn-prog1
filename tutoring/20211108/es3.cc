#include <iostream>
#include <fstream>
using namespace std;



int main(int argc, char** argv){
    fstream in, out;

    if(argc != 3){
        return -1;
    }

    in.open(argv[1], ios::in);
    out.open(argv[2], ios::out);

    char c;

    while(in >> c){
        if (c <= 'z' && c >= 'a'){
            out << (char) (c - 32);
        } else if (c <= 'Z' && c >= 'A'){
            out << (char) (c + 32);
        } else {
            out << c;
        }
    }

    in.close();
    out.close();


    return 0;
}