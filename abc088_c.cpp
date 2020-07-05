#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 3;
  vector<vector<int>> c(N, vector<int>(N));
  vector<int> b(N);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> c.at(i).at(j);
      // (0, 0) の値を 0 と仮定しても成り立つため、b を決定する
      if (i == 0) b.at(j) = c.at(i).at(j);
    }
  }

  for (int i = 0; i < N; i++) {
    int a = 0;
    for (int j = 0; j < N; j++) {
      // a + b = c を検証する
      int num_diff = b.at(j) - c.at(i).at(j);
      if (j == 0) {
        a = num_diff;
      } else if (a != num_diff) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}