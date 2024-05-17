#include <stdio.h>

int main() {
    char line[100];
    printf("Enter line\n");
    scanf("%[^\n]%*c", line); 
    printf("Line: %s\n", line); 
    return 0;
}
