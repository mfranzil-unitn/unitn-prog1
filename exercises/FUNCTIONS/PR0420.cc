//  Problem 4.20, page 120
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

// IMplementa il seguente solitario:
// TIra inizialmente 2 dadi. 
// - Se fai 2, 3, 12 perdi
// - Se fai 7 o 11 vinci



using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>

void initializeSeed();
int toss();
void win();
void lose();

int main()
{
  initializeSeed();
  int point = toss();
  if (point == 2 || point == 3 || point == 12) lose();
  if (point == 7 || point == 11) win();
  int t;
  for(;;) {
    t = toss();
    if (t == 7) lose();
    if (t == point) win();
  }
  return 0;
}

void initializeSeed()
{
  unsigned seed = time(NULL);
  srand(seed);
}

int toss()
{
  int die1 = rand()/10%6 + 1;
  int die2 = rand()/10%6 + 1;
  int t = die1 + die2;
  cout << "\tYou tossed a " << t << endl;
  return t;
}

void win()
{
  cout << "\tYou won.\n";
  exit(0);
}

void lose()
{
  cout << "\tYou lost.\n";
  exit(0);
}
