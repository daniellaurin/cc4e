#include <stdio.h>
#include <string.h>

void squeeze(char s[], int c) {
  int i, j, len = strlen(s);

  for (i = j = 0; i < len; i++) {
    if (s[i] != c) {
      s[j++] = s[i];
    }
  }
  s[j] = '\0'; // Ensure the string is null-terminated
}

int main() {
  char s[] = "Hello World";
  squeeze(s, ' ');

  printf("Modified string: %s\n", s); // Print the modified string
  return 0;
}
