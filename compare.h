#ifndef COMPARE_H
#define COMPARE_H

/**
 * Determine which integer value is greater.
 *
 * @param x First integer.
 * @param y Second integer.
 * @param same Indicates whether the integers are equal.
 * @return The greater integer value or x if they're equal.
 */
int whichIsBigger(int x, int y, bool &same);

/**
 * Sets a paid of integers to have the same value.
 *
 * @param x First integer.
 * @param y Second integer.
 * @return The original integer value of y.
 */
int makeBothSame(int x, int &y);

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
void makeFirstBigger(int &x, int &y, bool &swapped);

#endif
