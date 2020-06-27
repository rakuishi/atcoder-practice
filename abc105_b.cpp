#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i = 0; i <= (N / 4); i++) {
    for (int j = 0; j <= (N / 7); j++) {
      if (N == i * 4 + j * 7) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}