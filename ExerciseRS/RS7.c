#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1000

int main() {
    char list[MAXLINE];
    int n, i = 0, min, max;

    fgets(list, sizeof(list), stdin);
    n = atoi(list);
    min = max = n;

    do {
        fgets(list, sizeof(list), stdin);
        if(strcmp(list, "done\n") == 0)
            break;

        n = atoi(list);

        if(min > n)
            min = n;
        if(max < n)
            max = n;        
        i++;

    } while(1);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
