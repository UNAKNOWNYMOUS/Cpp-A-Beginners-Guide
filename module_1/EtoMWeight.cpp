/* 13. The moon's gravity is about 17 percent that of Earth's. Write a program
 * that displays a table that shows Earth pounds and their equivalent moon
 * weight. Have the tabe run from 1 to 100 pounds. Output a newline every 25
 * pounds. */
#include <iostream>
using namespace std;

int main() {
  int counter = 0;
  float earthWeight;

  for (earthWeight = 1; earthWeight < 100; earthWeight++) {
    cout << "Earth: " << earthWeight
         << " pounds == Moon: " << earthWeight * 0.17 << " pounds"
         << "\n";

    if (counter == 25) {
      cout << "\n";
      counter = 0;
    }
    counter++;
  }

  return 0;
}
