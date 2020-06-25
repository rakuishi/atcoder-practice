#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int N = s.size();
  cout << s[0] + to_string(N - 2) + s[N - 1] << endl;
}