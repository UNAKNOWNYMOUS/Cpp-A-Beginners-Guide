#include <iostream>

using namespace std;

int main() {
  for (int i = 2; i <= 100; i++) {
    bool prime = true;
    for (int j = 2; j <= 100; j++) {
      if (i != j && i % j == 0) {
        prime = false;
      }
    }
    if (prime) {
      cout << i << '\n';
    }
  }

  return 0;
}
