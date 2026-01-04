/* 16. Write a program that averages the absolute value of five values entered
 * by the user. Display the result. */
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int a, b, c, d, e;

  cout << "Enter first number: ";
  cin >> a;
  a = abs(a);

  cout << "Enter second number: ";
  cin >> b;
  b = abs(b);

  cout << "Enter third number: ";
  cin >> c;
  c = abs(c);

  cout << "Enter fourth number: ";
  cin >> d;
  d = abs(d);

  cout << "Enter fifth number: ";
  cin >> e;
  e = abs(e);

  cout << "The absolute value of the 5 numbers you have entered is: " << a
       << ", " << b << ", " << c << ", " << d << ", " << e;

  return 0;
}
