/*#include <stdio.h>

int main() {
    int n = 6; // Number of rows

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int s = 0; s < n - i - 1; s++) {
            printf("  ");
        }

        // Print stars with spaces in between
        for (int j = 0; j <= i; j++) {
            printf("*   ");
        }

        printf("\n");
    }

    return 0;
}*/
#include <stdio.h>

int main() {
    int n = 5; // Height of the upper half (total height will be 2*n - 1)

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            printf("  ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = n; j > i; j--) {
            printf("  ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
