#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 float p, r, t, n;
 cout << "enter P,T(in years) & R respectively to calculate your compound interest" << endl;
 cin >> p>>t>>r;
 cout << "enter the number how many times interest is compounded in one year"<<endl;
 cin >> n;
 cout << "your compound interest is = "<< (p*(pow(1+(r/n),n*t)))-p;


 return 0;
}
