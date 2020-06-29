#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L;
  cin >> N >> L;
  string S[N];
  for (int i = 0; i < N; i++) cin >> S[i];
  sort(S, S + N);

  string result;
  for (int i = 0; i < N; i++) result += S[i];
  cout << result << endl;
}
