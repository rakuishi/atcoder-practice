#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, C, K;
  cin >> N >> C >> K;

  vector<int> T(N);
  for (int i = 0; i < N; i++) cin >> T[i];
  sort(T.begin(), T.end());

  int bus_count = 0;
  for (int i = 0; i < N;) {
    bus_count++;
    int start_i = i;

    // 最初の乗客が待てる最大時間以下 && 最大 C 人
    while (i < N && T[i] <= T[start_i] + K && i - start_i < C) {
      i++;
    }
  }

  cout << bus_count << endl;
}