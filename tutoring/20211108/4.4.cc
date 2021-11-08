#include <iostream>

using namespace std;

int max(int* v, int lenght){
    int curr = v[0];
    for (int i = 1; i < lenght; i++){
        if (curr < v[i]){
            curr = v[i];
        }
    }
    return curr;
}

void fill_matrix(int** mat, int row, int col){
    cout << "Insert values: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> mat[i][j];
        }
    }
}

void print_matrix(int** mat, int row, int col){
    cout << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void get_row_col(int& row, int& col){
    while(row <= 0){
        cout << "Number of rows: ";
        cin >> row;
    }
    while(col <= 0){
        cout << "Number of cols: ";
        cin >> col;
    }

}




int main(){

    int** matrix;
    int row = -1, col= -1;

   
    get_row_col(row, col);

    matrix = new int* [row];
    for (int i = 0; i < row; i++){
        matrix[i] = new int [col];
    }


    
    fill_matrix(matrix, row, col);
    print_matrix(matrix, row, col);

    for (int i = 0; i < row; i++){
        cout << "max row " << i+1 << " => " << max(matrix[i], col) << endl;
    }
    

    for(int i = 0; i < row; i++){
        delete[] matrix[i];
    }

    delete[] matrix;

    return 0;
}
