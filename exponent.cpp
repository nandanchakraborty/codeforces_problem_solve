
#include <iostream>
using namespace std;

int main() {
  int n, i;
  cin >> n;
  i = n;

  if (i > 0) {
    while (i % 2 == 0) {
      i = i / 2;
    }

    if (i == 1) {
      cout << n << " is a power of 2";
    } else {
      cout << n << " is not a power of 2";
    }
  } else {
    cout << "Enter a valid positive number";
  }
  return 0;
}
