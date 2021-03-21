#include "compare.h"

/**
 * Determine which integer value is greater.
 *
 * @param x First integer.
 * @param y Second integer.
 * @param same Indicates whether the integers are equal.
 * @return The greater integer value or x if they're equal.
 */
int whichIsBigger(int x, int y, bool &same) {
  same = false;
  if (x > y) {
    return x;
  } else if (x < y) {
    return y;
  } else {
    same = true;
    return x;
  }
}

/**
 * Sets a paid of integers to have the same value.
 *
 * @param x First integer.
 * @param y Second integer.
 * @return The original integer value of y.
 */
int makeBothSame(int x, int &y) {
  int original_y = y;
  y = x;
  return original_y;
}

/**
 * Sets the first parameter to have the greater integer value.
 *
 * If the first integer is smaller, the values for the
 * parameters are swapped.
 *
 * @param x First integer.
 * @param y Second integer.
 * @param swapped Indicates whether the integers were swapped.
 */
void makeFirstBigger(int &x, int &y, bool &swapped) {
  swapped = false;
  if (x < y) {
    swapped = true;
    int temp = y;
    y = x;
    x = temp;
  }
  return;
}
