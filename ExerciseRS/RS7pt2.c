#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int isFirst = 1;
    int value, maxValue, minValue;
    char line[1000];

    while (fgets(line, sizeof(line), stdin) != NULL) {
        if (strcmp(line, "done\n") == 0)
            break;

        value = atoi(line);

        if (isFirst || value > maxValue)
            maxValue = value;

        if (isFirst || value < minValue)
            minValue = value;

        isFirst = 0;
    }

    printf("Maximum %d\n", maxValue);
    printf("Minimum %d\n", minValue);

    return 0;
}
