#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> roads(N);
  for (int i = 0; i < M; i++) {
    int x, y;
    cin >> x >> y;
    roads[x - 1] = roads[x - 1] + 1;
    roads[y - 1] = roads[y - 1] + 1;
  }

  for (int i = 0; i < N; i++) {
    cout << roads[i] << endl;
  }
}