#include <iostream>
#include <cmath>

using namespace std;

int main ()
{ float x;
  cout << "enter the length in centimeter = ";
  cin >> x;
  cout << "your length in meter = " << x/100;
  cout << "your length in kilometer = " << x/100000;
  return 0;
}
