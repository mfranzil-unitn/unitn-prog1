//  Problem 4.19, page 120
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>
#include <cmath>

const double pi = 3.1415926535897932385;

void rectangularToPolar(double& r, double& t, double x, double y)
{
  r = sqrt(x*x + y*y);
  if (x > 0)
    if (y >= 0) 
      t = atan(y/x);
    else 
      t = atan(y/x) + 2*pi;
  else if (x == 0)
    if (y > 0)  
       t = pi/2;
    else if (y == 0) 
       t = 0;
    else 
       t = 3*pi/2;
  else t = atan(y/x) + pi;
}


// MAIN

int main () 
{
  double x,y,r,t;
  do {
    cout << "Insert x and y: ";
    cin >> x >> y;
    rectangularToPolar(r,t,x,y);
    cout << "radius= " << r << ", angle = " << t/pi << "*Pi" << endl;
  } while (x!=0.0 || y != 0.0);
return 0;
}

