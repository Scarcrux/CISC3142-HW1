#include <cstdlib>
#include <iostream>
#include "compare.h"

using std::cout;
using std::endl;

int main (int argc, char** argv) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  bool swapped = false;
  bool same = false;

  int bigger = whichIsBigger(x, y, same);
  if (same == true) {
    cout << "x and y are the same" << endl;
  } else if (bigger == x) {
    cout << "x is larger" << endl;
  } else {
    cout << "y is larger" << endl;
  }

  makeFirstBigger(x, y, swapped);
  if (swapped == false) {
    cout << "x and y were not swapped because they were already in the right order" << endl;
  } else {
    cout << "x's new value is " << x << " and y's new value is " << y << endl;
  }

  if (same == false) {
    int original_y = makeBothSame(x, y);
    cout << "Now x and y both equal " << y << ". Previously, y's value was " << original_y << endl;
  }

  return 0;
}
