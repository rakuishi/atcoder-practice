#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X, counter = 0;
  cin >> A >> B >> C >> X;

  for (int yen_500 = 0; yen_500 <= A; yen_500++) {
    for (int yen_100 = 0; yen_100 <= B; yen_100++) {
      for (int yen_50 = 0; yen_50 <= C; yen_50++) {
        if (X == yen_500 * 500 + yen_100 * 100 + yen_50 * 50) {
          counter++;
        }
      }
    }
  }

  cout << counter << endl;
}