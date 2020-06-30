#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, d[100];
  cin >> N;
  for (int i = 0; i < N; i++) cin >> d[i];

  set<int> mochis;
  for (int i = 0; i < N; i++) mochis.insert(d[i]);
  cout << mochis.size() << endl;
}