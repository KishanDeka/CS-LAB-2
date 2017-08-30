#include <iostream>
#include <cmath>

using namespace std;

int main ()
{ float a;
  cout << "enter the side length of a triangle"<<endl;
  cin >> a;
  cout << "the area of the triangle is = " << (sqrt(3)/4)*pow(a,2);
  return 0;
}
