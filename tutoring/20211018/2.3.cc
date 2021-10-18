#include <iostream>
using namespace std;

/*
Consegna:

Scrivere un programma che permetta di eseguire le operazioni necessarie a ridurre una matrice quadrata in una sua forma a scalini
inserendole dal terminale:
- La matrice per ora può essere dichiarata come una variabile globale
- Le operazioni da implementare sono:
    - moltiplicare una riga per un fattore lambda
    - scambiare due righe tra di loro
    - poter eseguire la sottrazione tra due diverse righe 
    - poter stampare la matrice a terminale mostrando solo 2 cifre dopo la virgola (printf("%0.2f\t", numero_float))
    - poter uscire dal programma
    - poter vedere la lista completa dei comandi

*/


float matrix[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
const int lenght = 3;

void stampa_matrix()
{
    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; j < lenght; j++)
        {
            printf("%0.2f\t\t", matrix[i][j]);
        }
        cout << endl;
    }
}


void multiply_row(int row, float lambda){
    for (int i=0; i < lenght; i++){
        matrix[row][i] *= lambda;
    }
}


void subtract_rows(int row1, int row2){
    for(int i=0; i < lenght; i++){
        matrix[row1][i] -= matrix[row2][i];
    }
}



void swap_rows(int row1, int row2){
    float temp;
    for(int i=0; i < lenght; i++){
        temp = matrix[row1][i];
        matrix[row1][i] = matrix[row2][i];
        matrix[row2][i] = temp;
    }
}

void print_commands(){
    cout << "\nAvailable commands\n";
    cout << "'s' for swapping two rows\n";
    cout << "'m' for multiplying one row by a factor lambda\n";
    cout << "'-' for subtracting two rows\n";
    cout << "'p' for printing the matrix\n";
    cout << "'l' for listing all the commands\n";
    cout << "'q' for quitting the program\n\n";
}

void selection(const char answer){
    switch(answer){
        case 's':{
            int row1,row2;
            cout << "Rows: ";
            cin >> row1 >> row2;
            cout << endl;
            swap_rows(row1, row2);
            break;
        }
        case 'm':{
            int row;
            float lambda;
            cout << "Row: ";
            cin >> row;
            cout << "Lambda: ";
            cin >> lambda;
            multiply_row(row, lambda);
            break;
        }
        case '-':{
            int row1,row2;
            cout << "Rows: ";
            cin >> row1 >> row2;
            subtract_rows(row1, row2);
            break;
        }
        case 'p':{
            stampa_matrix();
            break;
        }
        case 'l':{
            print_commands();
            break;
        }
        case 'q':{
            break;
        }
        default: {
            cout << "Incorrect Answer\n";
            cout << "Commands: ";
            print_commands();
        }
    }
}



int main()
{
    char answer;
    stampa_matrix();
    print_commands();
    do{ 
        cout << "\nCommand: ";
        cin >> answer;
        cout << endl;
        selection(answer);
    }while(answer != 'q');
}