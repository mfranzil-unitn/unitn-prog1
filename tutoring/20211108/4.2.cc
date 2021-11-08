#include <iostream>
#include <fstream>
using namespace std;



int main(int argc, char** argv){
    fstream in, out;

    if(argc < 3){
        cout << "Number of file insufficient" << endl;
        return -1;
    }

    in.open(argv[1], ios::in);
    out.open(argv[2], ios::out);

    if (in.fail()){
        cout << "Input file does not exists" << endl;
        return -1;
    }

    char c;

    while(in >> c){
        if (c <= 'z' && c >= 'a'){
            out << c;
        }
    }

    in.close();
    out.close();


    return 0;
}
