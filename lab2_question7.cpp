#include <iostream>
#include <cmath>

using namespace std;

int main ()
{ float A, B;
  cout << "enter the two angles of a triangle ";
  cin >> A >> B;
  if (A+B<180) {
  cout << "The remaining third angle is" << 180-(A+B)<< endl;}
  else { cout<< "check your values again";}
  return 0;
}
