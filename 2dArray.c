//WRITE A PROGRAM TO ADD TWO MATRICES.
#include <stdio.h>
int main(){
    int row,column;
    printf("ENTER THE NUMBER OF THE ROW:");
    scanf("%d",&row);
    printf("ENTER THE NUMBER OF THE COLUMN:");
    scanf("%d",&column);
    int arr1[row][column];
    int arr2[row][column];
    int add[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
          printf("ENTER [%d][%d]=",i,j);
          scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("ENTER THE SECOND ARRAY [%d][%d]:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            add[i][j]=arr1[i][j]+arr2[i][j];
        }

    }
    printf("-----ADDED MATRIX-----\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
}