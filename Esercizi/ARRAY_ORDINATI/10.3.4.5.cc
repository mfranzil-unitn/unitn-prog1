#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
// #include <algorithm>

using namespace std;

void readarray(double a[], int size);
void printarray(double a[], int size);
void mergearray(double a[], double b[], int sizea, int sizeb, double c[]);

void swap(double & x, double & y);

int binarywr(double a[], int size, double target);
int binary(double a[], int start, int size, double target);

int linearwr(double a[], int size, double target);
int linear(double a[], int current, int size, double target, bool isFound);

void bubblesortwr(double a[], int size);
void bubblesort(double a[], int start, int size);

void mergesortwr(double a[], int size);
void mergesort(double a[], int start, int size);

void insertsortit(double a[], int size);
void insertsortwr(double a[], int size);
void insertsort(double a[], int size, int start);

int main()
{
	int size, result;
	double target;
	char response = 'n';
	cout << "Dimensione dell'array: ";
	cin >> size;
	double * a = new double[size];
	readarray(a, size);
	cout << "Do you want to sort your array? (b)ubblesort / (q)uicksort / (i)nsertsort-iterative / (I)nsertsort-recursive / (m)ergesort / (n)ope: ";
	cin >> response;
	// double * temp = new double[size];
	switch (response)
	{
		case 'i': insertsortit(a, size); break;
		case 'I': insertsortwr(a, size); break;
		case 'm': mergesortwr(a, size); break;
		case 'b': bubblesortwr(a, size); break;
		case 'n': break;
		default: cout << "Invalid choice, terminating." << endl; exit (0); 
	}
	printarray(a, size);
	do
	{
		cout << "Choose your search method (l)inear / (b)inary: ";
		cin >> response;
	} while (response != 'b' && response != 'l');
	cout << "Target (double): ";
	cin >> target;
	if (response == 'l')
	{
		result = linearwr(a,size,target);
	} 
	else if (response == 'b')
	{
		result = binarywr(a,size,target);
	}
	do
	{
		if (result >= 0)
		{	
			cout << "Target found at place a[" << result << "]. (s)earch again or (e)xit.";
			cin >> response;
		}
		else 
		{
			cout << "Target not found. (s)earch again or (e)xit.";
			cin >> response;
		}
	} while (response == 's');
	return 0;
}

void mergesortwr(double a[], int size)
{
	mergesort(a, 0, size);
}

void mergesort(double a[], int start, int size)
{
//	cout << "Invoking mergesort with values start and size " << start << " and " << size << endl; // DEBUG
	printarray(a, (size-start)); // DEBUG
	int media = (start+size)/2.0 + ((start+size)%2!=0?1:0);
	int size1 = media-start;
	int size2 = size-media;
	double a1[size1], a2[size2];
//	cout << "media = " << media << endl;  // DEBUG
//	cout << "a1 and a2 sizes are " << size1 << " and " << size2 << endl; // DEBUG
	int i;
	for (i = 0; i<size1; i++)
	{
		a1[i] = a[i];
//		cout << "a1[" << i << "] = " << a1[i] << " = a[" << i << "]" << endl; // DEBUG
	}
//	cout << "i = " << i << endl; //DEBUG
	for (int j = 0; j<size2; j++)
	{
		a2[j] = a[j+i];
//		cout << "a2[" << j << "] = " << a2[j] << " = a[" << j+i << "]" << endl; //DEBUG
	}
    printarray(a1, size1); //DEBUG
	printarray(a2, size2); cout << endl; //DEBUG
	if (size1 !=1)
	{
		mergesort(a1, start, media);
	}
	if (size2 != 1)
	{
		mergesort(a2, media, size); 
	}
	mergearray(a1, a2, size1, size2, a);
}

void insertsortit(double a[], int size)
{
	for (int i = 1; i < size; i++)
	{
		if (a[i]<a[i-1])
		{
			swap(a[i],a[i-1]);
			i = i-2;
			printarray(a, size);
		}
	}
}

void insertsortwr(double a[], int size)
{
	insertsort(a, size, 1);
}

void insertsort(double a[], int size, int start)
{
	if (a[start]<a[start-1])
	{
		swap(a[start],a[start-1]);
		start = start-2;
		printarray(a, size);
	}
	if (start < size-1)
	{
		insertsort(a, size, start+1);
	}
}

void bubblesortwr(double a[], int size)
{
	bubblesort(a, 0, size-1);
}

void bubblesort(double a[], int start, int size) 
{
	if (size !=0)
	{
		if (start == size)
		{
			size--;
			start = 0;
			cout << endl;
		}
		if (a[start] > a[start+1])
		{
			swap(a[start], a[start+1]);
		}
		cout << "size = " << setw(2) << size << ", start = " << setw(2) << start << "\t";
		printarray(a, size+1);
		bubblesort(a, start+1, size);
	}
}

int linearwr(double a[], int size, double target)
{
	return linear(a, 0, size-1, target, 0);
}

int linear(double a[], int current, int size, double target, bool isFound)
{
	int res = -1;
//	cout << "Starting int linear(), current = " << current << endl;
	if (isFound == 0)
	{
		if (current <= size)
		{
//			cout << "Range valid, moving on..." << endl;
			if (a[current] == target)
			{
				res = current;
				isFound = 1;
//				cout << "Item found in position " << current << endl;
			}
			else 
			{
//				cout << "Item not found, moving on to position " << current+1 << endl;
				res = linear(a, current+1, size, target, 0);
			}
		}
		else
		{
			res = -1;
//			cout << "Unable to find item, exiting" << endl;
		}
	}
//	cout << "Recursive function successfully finished with exit code " << res << endl;
	return res;
}

int binarywr(double a[], int size, double target)
{
	return binary(a, 0, size-1, target);
}

int binary(double a[], int start, int size, double target)
{
	int pivot = (start+size)/2, res;
	if (size < start)
	{
		res = -1;
	}
	else if (a[pivot] == target)
	{
		res = pivot;
	}
	else if (a[pivot] < target)
	{
		res = binary(a,pivot+1,size,target);
	}
	else // if (a[pivot] > target)
	{
		res = binary(a,start,pivot-1,target);
	}
	return res;
}

void readarray(double a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

void printarray(double a[], int size)
{
	cout << " [";
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << ((size-1)==i?"]":", ");
	}
	cout << endl;
}

void mergearray(double a[], double b[], int sizea, int sizeb, double c[]) 
{
	printarray(a, sizea);
	printarray(b, sizeb); 
	cout << endl;
	for (int ak = 0, bk = 0, ck = 0; (ck < (sizea + sizeb)); ck++)
	{
//		cout << "ck = " << ck << endl; //DEBUG
		if (bk == sizeb || (ak<sizea) && (a[ak] < b[bk]))
		{
			c[ck] = a[ak];
			ak++;
//			cout << "c[" << ck << "] = a[" << (ak-1) << "] = " << c[ck] << "; a is now " << ak << endl; //DEBUG
		}
		else 
		{
			c[ck] = b[bk];
			bk++;
//			cout << "c[" << ck << "] = b[" << (bk-1) << "] = " << c[ck] << "; b is now " << bk << endl;//DEBUG
		}
	}
}

void swap (double & x, double & y) 
{
  double z = x;
  x = y;
  y = z;
}