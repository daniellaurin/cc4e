#include <stdio.h>

int main() {
    printf("Enter line\n");
    char line[100];
    fgets(line, sizeof(line), stdin);
    printf("Line: %s", line);
    return 0;
}
