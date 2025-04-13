#include <iostream>

#include "MyMath.h"

using namespace std;

int main()
{
  int pow = 3;
  int a;
  cout << "Enter int: ";
  cin >> a;
  cout << a << " : " << my_n_pow(a, pow) << endl;

  double b;
  cout << "Enter double: ";
  cin >> b;
  cout << b << " : " << my_n_pow(b, pow) << endl;

  float c;
  cout << "Enter float: ";
  cin >> c;
  cout << c << " : " << my_n_pow(c, pow) << endl;
  return 0;
}
