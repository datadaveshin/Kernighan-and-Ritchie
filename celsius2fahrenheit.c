/*  Ex. 1.4
    Make Celsius to Fahrenheit without looking at the previous one
    Again 0 to 300 degrees with a step of 10 and column labels
*/

# import <stdio.h>

int main()
{
  int low;
  int high;
  int step;
  float celsius;
  float fahrenheit;

  low = 0;
  high = 300;
  step = 10;
  celsius = 0;

  printf("%6s %4s\n", "C", "F");
  printf("%6s %4s\n", "-----", "---");

  while (celsius <= high) {
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("%6.0f %4.0f\n", celsius, fahrenheit);
    celsius = celsius + step;
  }


  return 0;
}
