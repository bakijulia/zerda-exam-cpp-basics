//============================================================================
// Name        : exam_03.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void float_operators(float total, float* pointer) {
  float result;
  result = *pointer * total;
  cout << result << endl;
  cout << pointer << endl;
  *pointer = total * 5;
  cout << *pointer << endl;
}

/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */

int main() {
  float total = 123;
  float* pointer = &total;

  float_operators(total, pointer);
  cout << *pointer << endl;
  cout << total << endl;

  return 0;
}
