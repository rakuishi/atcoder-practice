#include <bits/stdc++.h>
using namespace std;

bool is_even(int A[], int N) {
  for (int i = 0; i < N; i++) {
    if (A[i] % 2 != 0) return false;
  }
  return true;
}

void divide_by_2(int A[], int N) {
  for (int i = 0; i < N; i++) {
    A[i] /= 2;
  }
}

int main() {
  int N;
  cin >> N;

  int A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int counter = 0;
  while (true) {
    if (!is_even(A, N)) {
      break;
    }

    divide_by_2(A, N);
    counter++;
  }

  cout << counter << endl;
}