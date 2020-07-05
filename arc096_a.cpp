#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X, Y, min_price;
  cin >> A >> B >> C >> X >> Y;

  for (int i = 0; i <= X + Y; i++) {
    // 最初に A と B をすべて使う計算を調べ、その後 A, B が余るように C を調べる
    int price = 2 * C * i + A * max(0, X - i) + B * max(0, Y - i);
    min_price = (i == 0) ? price : min(min_price, price);
  }

  cout << min_price << endl;
}