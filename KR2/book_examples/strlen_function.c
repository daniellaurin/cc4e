/* return length of s
Old version of the strlen function*/

// strlen(s) char s[];
// {
//   int i;

//   i = 0;
//   while (s[i] != '\0')
//     ++i;
//   return (i);
// }

#include <stdio.h>
// Corrected strlen function
int func_strlen(char *s) {
  int i = 0;
  while (s[i] != '\0') {
    ++i;
  }
  return i;
}

int main() {
  char s[] = "Hello World";
  printf("Length of testString: %d\n", func_strlen(s));
  return 0;
}
