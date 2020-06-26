#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  smatch match;

  // regex_search: 部分一致, regex_match: 完全一致
  if (regex_search(s, match, regex("A[A-Z]+Z"))) {
    cout << match[0].length() << endl;
  }
}