#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    fstream my_in, my_out;
    char tmp[31];

    if (argc != 3) {
        cout << "Usage: ./a.out <sourcefile>\n";
        exit(0);
    }

    my_in.open(argv[1], ios::in);
    my_out.open(argv[2], ios::out);

    my_in >> tmp;
    if (!(tmp[0] >= 'A' && tmp[0] <= 'Z')) {
        tmp[0] = tmp[0] + ('A' - 'a');
    }

    while (!my_in.eof()) {
        my_out << tmp << " ";
        if (tmp[strlen(tmp) - 1] == '.' || tmp[strlen(tmp) - 1] == '?' || tmp[strlen(tmp) - 1] == '!') {
            my_in >> tmp;
            if (!(tmp[0] >= 'A' && tmp[0] <= 'Z')) {
                tmp[0] = tmp[0] + ('A' - 'a');
            }
        } else {
            my_in >> tmp;
        }
    }
    my_in.close();
    my_out.close();
    return (0);
}
