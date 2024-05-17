#include <stdio.h>
int main() /* count new lines in input */
{
    int c, nl, space;
    nl = 0;
    space = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ') {
            ++space;
        }
    }


    printf("%d %d\n", space, nl);

    return 0;
}