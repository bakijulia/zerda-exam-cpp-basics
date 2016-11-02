//============================================================================
// Name        : exam_04.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

/**
 * Create a function that takes an integer and returns how many divisors it has
 */
int how_many_divisors(int number) {
  int result = 0;
  for (int i = 1; i <= number; i++) {
    if (number % i == 0) {
      result++;
    }
  }
  return result;
}

int main() {
  cout << "Please give me an integer: " << endl;
  int number;
  cin >> number;
  cout << "The number has " << how_many_divisors(number) << " divisors";

  return 0;
}
