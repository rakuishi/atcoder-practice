#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  sort(s.begin(), s.end());                   // ratcode -> acdeort
  sort(t.begin(), t.end(), greater<char>());  // atlas -> tslaa

  if (s < t) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}