#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int topping_count = 0;
  if (S[0] == 'o') topping_count++;
  if (S[1] == 'o') topping_count++;
  if (S[2] == 'o') topping_count++;
  cout << 700 + 100 * topping_count << endl;
}