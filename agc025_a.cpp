#include <bits/stdc++.h>
using namespace std;

// 各桁の合計
int get_sum_of_digits(int num) {
  int sum = 0;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {
  int N, result = INT_MAX;
  cin >> N;

  for (int i = 2; i < N; i++) {
    int sum = get_sum_of_digits(i) + get_sum_of_digits(N - i);
    result = min(result, sum);
  }

  cout << result << endl;
}