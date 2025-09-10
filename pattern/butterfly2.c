#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Upper half
    for (i = 1; i <= n; i++) {
        // Left stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Spaces
        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        // Right stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = n; i >= 1; i--) {
        // Left stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Spaces
        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        // Right stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}