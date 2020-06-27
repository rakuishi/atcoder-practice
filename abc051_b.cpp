#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, S, counter = 0;
  cin >> K >> S;

  for (int x = 0; x <= K; x++) {
    for (int y = 0; y <= K; y++) {
      for (int z = 0; z <= K; z++) {
        if (x + y + z == S) counter++;
      }
    }
  }

  cout << counter << endl;
}