#include <stdio.h>

int main() {
  int year = 2015;

  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    printf("it 's a leap year");
  else
    printf("it's not");
}