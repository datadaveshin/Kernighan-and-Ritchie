/*  Exercise 1.5 Fahrenheit to Celsius in reverse
    From 300 to 0 in reverse
*/

# import <stdio.h>

int main()
{

  float fahrenheit;
  float celsius;
  int step;

  fahrenheit = 300;
  step = 20;

  printf("%4s %8s", "F", "C\n");
  printf("%6s %8s", "-----", "-----\n");

  while (fahrenheit >= 0) {
    celsius = fahrenheit * 9.0/5.0 + 32.0;
    printf("%6.1f %7.1f\n", fahrenheit, celsius);
    fahrenheit = fahrenheit - step;
  }

  return 0;
}
