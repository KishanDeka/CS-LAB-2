#include <iostream>
using namespace std;

int main() { float f;
  cout << "enter the temperature in fehrenheit = ";
  cin >> f;
  cout << "your temperature in celsius = " << (5*(f-32))/9;
	return 0;
}
