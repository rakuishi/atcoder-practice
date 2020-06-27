#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, x[100], y[100];
  float result = 0;

  cin >> N;
  for (int i = 0; i < N; i++) cin >> x[i] >> y[i];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      float length = pow(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2), 0.5);
      result = max(length, result);
    }
  }

  cout << result << endl;
}