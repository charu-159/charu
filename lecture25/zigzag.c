#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* zigzag(char* s, int numRows) {
    if (numRows == 1 || numRows >= strlen(s)) return strdup(s);

    char* rows[numRows];
    int lens[numRows];
    for (int i = 0; i < numRows; i++) {
        rows[i] = (char*)calloc(strlen(s) + 1, sizeof(char));
        lens[i] = 0;
    }

    int currRow = 0;
    int down = 1;

    for (int i = 0; s[i]; i++) {
        rows[currRow][lens[currRow]++] = s[i];
        if (currRow == 0) down = 1;
        else if (currRow == numRows - 1) down = 0;
        currRow += down ? 1 : -1;
    }

    char* result = (char*)calloc(strlen(s) + 1, sizeof(char));
    int pos = 0;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < lens[i]; j++) {
            result[pos++] = rows[i][j];
        }
        free(rows[i]);
    }

    return result;
}

int main() {
    char* s = "HELLOCHARU";
    int numRows = 3;
    char* res = zigzag(s, numRows);
    printf("Zigzag: %s\n", res);
    free(res);
    return 0;
}