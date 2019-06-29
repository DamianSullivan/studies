// 2520 is the smallest number that can be divided by each of the numbers from 1
// to 10 without any remainder. What is the smallest positive number that is
// evenly divisible by all of the numbers from 1 to 20?

#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>

using namespace std;

bool is_divisible(int n, int from, int to) {
  for (int j = from; j < to; j++) {
    if (n % j != 0) {
      return false;
    }
  }
  return true;
}

int smallest_multiple(int from, int to) {
  for (int i = 2 * to + 1; i < INT_MAX; i++) {
    if (is_divisible(i, from, to)) {
      return i;
    }
  }
  return 0;
}

int main() {
  int smallest = smallest_multiple(1, 20);
  printf("The smallest number divisible by all digits in 1-20 is: %d",
         smallest);
}