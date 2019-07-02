// Project Euler Problem 6:
//
// The sum of the squares of the first ten natural numbers is,
//     12 + 22 + ... + 102 = 385
// The square of the sum of the first ten natural numbers is,
//     (1 + 2 + ... + 10)2 = 552 = 3025
// Hence the difference between the sum of the squares of the first ten natural
// numbers and the square of the sum is 3025 − 385 = 2640.
//
// Find the difference between the sum of the squares of the first one hundred
// natural numbers and the square of the sum.

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int diff_sum_squares(int n) {
  int sum = 0;
  int sum_squares = 0;
  for (int i = 1; i <= n; i++) {
    printf("%d\n", i);
    sum += i;
    sum_squares += i * i;
  }
  return (sum * sum) - sum_squares;
}

int main() {
  int n = 100;
  int sum = diff_sum_squares(n);
  printf(
      "The difference between the sum of squares of the first %d numbers and "
      "the square of the sum is: %d", n, sum);
}