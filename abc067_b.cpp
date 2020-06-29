#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, l[50], result;
  cin >> N >> K;
  for (int i = 0; i < N; i++) cin >> l[i];
  sort(l, l + N, greater<>());

  for (int i = 0; i < K; i++) {
    result += l[i];
  }

  cout << result << endl;
}