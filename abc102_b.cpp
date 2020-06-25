#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int A[N];
  for (int i = 0; i < N; i++) cin >> A[i];

  int min_num = A[0];
  int max_num = A[0];
  for (int i = 0; i < N; i++) {
    min_num = min(min_num, A[i]);
    max_num = max(max_num, A[i]);
  }

  cout << max_num - min_num << endl;
}