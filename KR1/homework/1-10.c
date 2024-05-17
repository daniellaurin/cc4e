#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n') {
            putchar('\n');
        } else {
            putchar(c);
        }
            ++c;
        }   
        return 0;
    }
