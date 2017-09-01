#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 float a, b, c, d, e, t;
 cout << "enter the total marks of the subjects" << endl;
 cin >> t;
 cout << "enter your marks of the five subjects"<<endl;
 cin >> a>>b>>c>>d>>e;
 cout << "your total marks is = "<<a+b+c+d+e<< endl<< "your average marks is = "<<(a+b+c+d+e)/5<< endl<< "your percentage is = "<< ((a+b+c+d+e)/(5*t))*100;


    return 0;
}
