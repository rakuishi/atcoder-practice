#include <bits/stdc++.h>
using namespace std;

// 各桁の合計
int get_sum_of_each_digit(int num) {
  int sum = 0;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int result = 0;
  for (int i = 1; i <= N; i++) {
    int sum_of_each_digit = get_sum_of_each_digit(i);
    if (A <= sum_of_each_digit && sum_of_each_digit <= B) result += i;
  }

  cout << result << endl;
}