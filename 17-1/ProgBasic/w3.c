#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    int digit = 0, upper = 0, lower = 0, other = 0;
    char ch;

    for (int i = 0; i < 10; i++) {

        // ch = getchar();
        scanf("%c", &ch);
        // printf("%d", ch);

        if (ch >= '0' && ch <= '9') ++digit;
        else if (ch >= 'A' && ch <= 'Z') ++upper;
        else if (ch >= 'a' && ch <= 'z') ++lower;
        else ++other;

    }
    // scanf("%c", &ch);
    printf("%d %d %d %d", digit, upper, lower, other);

    return 0;
}
