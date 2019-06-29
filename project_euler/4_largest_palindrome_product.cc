// A palindromic number reads the same both ways. The largest palindrome made
// from the product of two 2-digit numbers is 9009 = 91 × 99. Find the largest
// palindrome made from the product of two 3-digit numbers.

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int reverse_digits(int n) {
  int reverse = 0;
  while (n > 0) {
    reverse = reverse * 10 + n % 10;
    n /= 10;
  }
  return reverse;
}

int main() {
  int factor1 = 0;
  int factor2 = 0;
  int largest = 0;

  for (int i = 999; i >= 1; i--) {
    for (int j = i; j >= 1; j--) {
      int product = i * j;

      if (product == reverse_digits(product) && product > largest) {
        factor1 = i;
        factor2 = j;
        largest = product;
        break;
      }
    }
  }

  printf(
      "The largest palindromic number from two three digit numbers is:"
      " %d = %d x %d\n",
      largest, factor1, factor2);
}