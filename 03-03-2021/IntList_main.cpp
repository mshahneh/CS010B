#include "IntList.h"

#include <iostream>

using namespace std;

int main() {
  IntList test1;

  test1.push_front(-3);
  test1.push_front(8);
  test1.push_front(0);
  test1.push_front(8);
  test1.push_front(-5);
  test1.push_front(2);

  cout << test1.min_value() << endl;
  return 0;
}
