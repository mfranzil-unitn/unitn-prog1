#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int MAXSIZE = 255;

char** array(int dim);

int main(int argc, char** argv)
{
    fstream myin, myout;
    if (argc != 4)
    {
        cout << "Utilizzo corretto: ./a.out input numerorighe output" << endl;
        exit(EXIT_FAILURE);
    }
    myin.open(argv[1], ios::in);
    if(myin.fail())
    {
        cout << "Errore! File non fornito!" << endl;
        exit(EXIT_FAILURE);
    }
    myout.open(argv[3], ios::out);
    int nrighe = atoi(argv[2]);
    char** buffer = array(nrighe);
    for(int i = 0; i < nrighe && !myin.eof(); i++)
    {
        myin.getline(buffer[i], MAXSIZE);
        for (int j = 0; j < strlen(buffer[i]); j++)
        {
            if(buffer[i][j] == '\t' || buffer[i][j] == ' ')
            {
               if (j % 2 != 0)
               {   
                    buffer[i][j] = '%';
                }
               else
               {
                    buffer[i][j] = '$';
               }
            }
        }
    }
    for(int i = nrighe-1; i >= 0; i--)
    {
        // MP: accesso ad area non inizializzata
        // (se il file e' piu' corto di nrighe,
        // si potrebbe fare strlen di array di caratteri
        // non inizializzati, con risultati non
        // predicibili)
        if(strlen(buffer[i]) > 0)
            myout << buffer[i] << endl;
    }
}

char** array(int dim)
{
    char ** res = new char*[dim];
    for(int i = 0; i < dim; i++)
        // MP: cosi' si spreca potenzialmente un po' di spazio
        // (anche se non e' un errore)
        res[i] = new char[MAXSIZE + 1];
    return res;
}
