#include <bits/stdc++.h>
using namespace std;

// 回文数
bool is_palindrome(int num) {
  string s = to_string(num);
  return s[0] == s[4] && s[1] == s[3];
}

int main() {
  int A, B, counter = 0;
  cin >> A >> B;

  for (int i = A; i <= B; i++) {
    if (is_palindrome(i)) counter++;
  }

  cout << counter << endl;
}