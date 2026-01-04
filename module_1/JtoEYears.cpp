/* 14. A year on Jupiter (the time it takes for Jupiter to make one full circuit
 * around the Sun) takes about 12 Earth years. Write a program that converts
 * Jovian years to Earth years. Have the user specify the number of Jovian
 * years. Allow fractional years. */
#include <iostream>
using namespace std;

int main() {
  float jovianY;

  cout << "Enter Jovian years to be converted to Earth years: ";
  cin >> jovianY;

  cout << jovianY << " Jovian years is equivalent to " << jovianY * 12.0
       << " Earth years!\n";

  return 0;
}
