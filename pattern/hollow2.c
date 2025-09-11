#include <stdio.h>

int main() {
    int rows = 5; // You can change this to make a bigger triangle

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            // Print '*' at the borders or the last row
            if (j == 1 || j == i || i == rows)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}


