//============================================================================
// Name        : exam_01.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

bool decide_equal_or_bigger(int* array, int length) {
  bool result = false;
  for (int i = length; i > 2; i--) {
    for (int j = 1; j < i - 1; j++) {
      if (array[i] >= array[j]) {
        result = true;
      }
    }
  }
  return result;

}

/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

int main() {
  int array[] = { 3, 2, 4, 6, -1 };
  int length;
  length = sizeof(array) / sizeof(*array);

  cout << decide_equal_or_bigger(array, length);

  return 0;
}
