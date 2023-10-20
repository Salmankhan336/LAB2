/**
 * Author: salman khan
 * 
 * This program prompts the user to enter the
 * base and the height of a triangle and computes
 * its area using the well-known formula
 *  1/2 * base * height
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  //declared area, base ,height in double data type

  double area, base, height;

  //use printf predefine function to print the message on console

  printf("Please enter the base of a triangle: ");

  //use scanf function to read the base value from user

  scanf("%lf", &base);

  printf("Please enter the height of a triangle: ");

  scanf("%lf", &height);

  area = 1/2 * base * height;

  printf("The area is %f square units.\n", area);

  return 0;
}
