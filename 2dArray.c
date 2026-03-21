//WRITE A PROGRAM TO ADD TWO MATRICES.
// #include <stdio.h>
// int main(){
//     int row,column;
//     printf("ENTER THE NUMBER OF THE ROW:");
//     scanf("%d",&row);
//     printf("ENTER THE NUMBER OF THE COLUMN:");
//     scanf("%d",&column);
//     int arr1[row][column];
//     int arr2[row][column];
//     int add[row][column];
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//           printf("ENTER [%d][%d]=",i,j);
//           scanf("%d",&arr1[i][j]);
//         }
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("ENTER THE SECOND ARRAY [%d][%d]:",i,j);
//             scanf("%d",&arr2[i][j]);
//         }
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             add[i][j]=arr1[i][j]+arr2[i][j];
//         }

//     }
//     printf("-----ADDED MATRIX-----\n");
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("%d\t",add[i][j]);
//         }
//         printf("\n");
//     }
// }

//WRITE A PROGRAM TO SUBTRACT TWO MATRICES.

// #include <stdio.h>

// int main(){
//     int row,column;
//     printf("ENTER THE NUMBER OF THE ROWS AND COLUMNS:");
//     scanf("%d%d",&row,&column);
//     int arr[row][column],arr2[row][column],sub[row][column];
//     printf("-----FIRST ARRAY-----\n");
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("ENTER[%d][%d]=",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("-----SECOND ARRAY-----\n");
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("ENTER[%d][%d]=",i,j);
//             scanf("%d",&arr2[i][j]);
//         }
//     }
//     printf("-----SUBTRACTED ARRAY-----\n");
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             sub[i][j]=arr[i][j]-arr2[i][j];
        
//         }
       
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
          
//             printf("%d\t",sub[i][j]);
//         }
//         printf("\n");
//     }
   
//     return 0;
// }

//WRITE A PROGRAM TO MULTIPLY TWO MATRICES

#include <stdio.h>
int main(){
    int row,column;
    printf("ENTER THE NUMBER OF ROWS AND COLUMN:");
    scanf("%d%d",&row,&column);
    int arr[row][column],arr2[row][column],mul[row][column];
    printf("-----FIRST MATRIX-----\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("ENTER [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("-----SECOND MATRIX-----\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("ENTER [%d][%d]:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("-----MULTIPLIED MATRIX-----\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            mul[i][j]=arr[i][j]*arr2[i][j];
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}