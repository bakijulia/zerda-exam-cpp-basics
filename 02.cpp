//============================================================================
// Name        : exam_02.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

/**
 * Create a function that prints a multiplication table with a given base number
 * It should take the base number as a parameter, and print the output to the cout
 *
 * The output should look like this for 5 as base:
 *   1 * 5 = 5
 *   2 * 5 = 10
 *   3 * 5 = 15
 *   4 * 5 = 20
 *   5 * 5 = 25
 *   6 * 5 = 30
 *   7 * 5 = 35
 *   8 * 5 = 40
 *   9 * 5 = 45
 *   10 * 5 = 50
 */
void multiplication_table(int base_number) {
  for (int i = 1; i <= 10; i++) {
    cout << base_number << " * " << i << " = " << base_number * i << endl;
  }
}

int main() {
  int base_number;
  cout << "Please give me an integer number: " << endl;
  cin >> base_number;

  multiplication_table(base_number);

  return 0;
}
