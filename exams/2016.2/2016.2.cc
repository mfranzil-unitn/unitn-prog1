#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const char SEGNAPOSTO = '!';
const int DIMMAX = 40;

// Dichiarare qui sotto la funzione reverse_array
void reverse_array(char* in, int dim);
void reverse_array_ric(char* in, int start, int dim);
bool vocale_minuscola(char c);

int main(int argc, char* argv[]) {
	char input[DIMMAX];
	cout << "Introdurre stringa da invertire: ";
	cin >> input;

	// Assumiamo che sia sempre strlen(input) < DIMMAX
	reverse_array(input, strlen(input));
	cout << "Array invertito: " << input << endl;
	return 0;
}

void reverse_array(char* in, int dim) {
	reverse_array_ric(in, 0, dim);
}

void reverse_array_ric(char* in, int start, int dim) {
	if (start < dim)
    {	
    	char temp;
    	temp = in[start];
    	in[start] = in[dim-1];
    	in[dim-1] = temp;
    	if (vocale_minuscola(in[dim-1]))
    		in[dim-1] = SEGNAPOSTO;
    	if (vocale_minuscola(in[start]))
    		in[start] = SEGNAPOSTO;
    	reverse_array_ric(in, start+1, dim-1);
    }
}

bool vocale_minuscola(char c) {
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}