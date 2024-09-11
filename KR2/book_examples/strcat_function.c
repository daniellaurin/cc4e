
#include <stdio.h>

// Implementation of strcat
void strcats(char *s, const char *t) {
  int i, j;

  i = j = 0;
  while (s[i] != '\0') { // Find the end of s
    i++;
  }
  while ((s[i++] = t[j++]) != '\0') { // Copy t to the end of s
    ;
  }
}

int main() {
  // Example usage of strcat
  char s[50] = "Hello";
  char t[] = ", World!";

  printf("Before concatenation: %s\n", s);

  strcats(s, t); // Concatenate t to the end of s

  printf("After concatenation: %s\n", s);

  return 0;
}
