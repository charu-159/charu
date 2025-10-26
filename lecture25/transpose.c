//transpose of a matrix
#include<stdio.h>
int main(){
    int a[10][10],transpose[10][10];
    int row ,column;

    printf("enter the value of row and column:");
    scanf("%d%d",&row,&column);
    // Taking input for the matrix
    printf("Enter elements of the matrix:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
         scanf("%d",&a[i][j]);
        }
    }
// Finding the transpose
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        transpose[j][i]=a[i][j];
}
}
// Displaying the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Displaying the transpose
    printf("\nTranspose of Matrix:\n");
     for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}