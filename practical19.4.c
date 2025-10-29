#include <stdio.h>

int main() {
    int n = 4; // change this to 1..26 (1 -> A, 2 -> B... 4 -> D)
    int i, j, k;
    char ch;

    // top half including middle row
    for (i = 1; i <= n; ++i) {
        // leading spaces
        for (j = 0; j < n - i; ++j) putchar(' ');

        // left increasing letters A..(A+i-1)
        for (k = 0; k < i; ++k) {
            ch = 'A' + k;
            putchar(ch);
        }

        // right decreasing letters (A+i-2)..A
        for (k = i - 2; k >= 0; --k) {
            ch = 'A' + k;
            putchar(ch);
        }

        putchar('\n');
    }

    // bottom half (excluding middle row)
    for (i = n - 1; i >= 1; --i) {
        // leading spaces
        for (j = 0; j < n - i; ++j) putchar(' ');

        // left increasing letters
        for (k = 0; k < i; ++k) {
            ch = 'A' + k;
            putchar(ch);
        }

        // right decreasing letters
        for (k = i - 2; k >= 0; --k) {
            ch = 'A' + k;
            putchar(ch);
        }

        putchar('\n');
    }

    return 0;
}
