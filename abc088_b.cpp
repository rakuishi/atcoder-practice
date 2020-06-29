#include <bits/stdc++.h>
using namespace std;

int N, a[100], alice, bob;

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> a[i];
  sort(a, a + N, std::greater<>());  // 降順

  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      alice += a[i];
    } else {
      bob += a[i];
    }
  }

  cout << alice - bob << endl;
}