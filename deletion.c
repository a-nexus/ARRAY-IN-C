//HERE IN THIS DIRECTORY I PERFERMED ALL THE DELETION IN THE ARRAY
//FIRST IN THE DELETING IN THE END

// #include <stdio.h>
// #include <conio.h>

// int main(){
//     int arr[100],num,item;
//     printf("ENTER THE SIZE OF THE ARRAY:");
//     scanf("%d",&num);
//     for(int i=0;i<num;i++){
//         printf("%d INDEXED VALUE IS:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<num;i++){
//        arr[i]=arr[i+1];  //HERE IS THE CONCEPT BETWEEN THE DELETION OF THE FIRST ELEMENT
//     }
    
//     num--;//IF WE DONT USE N-- THEN THE FIRST ELEMENT WHICH WE DELETE FROM THE ARRAY IT COME BACK IN THE LAST
//     for(int i=0;i<num;i++){
//        printf("%d\t",arr[i]);
//     }
// }


//NEST DELETION AT THE ENDING 
//IN THAT DELETION THE CONCEPT IS VERY SIMPLE JUST YOU HAVE TO DEDUCT THE INPUT AFTER TAKING DEDUCT BY 1 

// #include <stdio.h>
// #include <conio.h>
 
// int main(){
//     int arr[100],num;
//     printf("ENTER THE SIZE OF THE ARRAY:");
//     scanf("%d",&num);
//     for(int i=0;i<num;i++){
//         printf("%d indexed value=",i+1);
//         scanf("%d",&arr[i]);
//     }
//     num--;//WE DELETED THE LAST STORAGE BOX BY NUM-- SO THE LAST INDEX VALUE IS NOT PRINTING AS WELL SO WE DON IT;
//     for(int i=0;i<num;i++){
//         printf("%d\t",arr[i]);
//     }
// return 0;
// }


//THE THIRD PART 
//DELETION AT A SPECIFIC PLACE

// #include <stdio.h>
// #include <conio.h>

// int main(){
//     int arr[100],num,del;
//     printf("ENTER THE SIZE OF THE ARRAY:");
//     scanf("%d",&num);
//     for(int i=0;i<num;i++){
//         printf("%d indexed value=",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("ENTER THE SPECIFIC INDEX ADDRESS WHICH YOU WANT TO CHANGE:");
//     scanf("%d",&del);
   
//     for(int i=del-1;i<num;i++){
//         arr[i]=arr[i+1];
//     }
//     num--;
//      for(int i=0;i<num;i++){
//         printf("%d\t",arr[i]);
//      }
// return 0;
// }

//WRITE A PROGRAM TO INSERT AN ELEMENT IN AN ARRAY AT THE SPECIFIC POSITION

// #include <stdio.h>

// int main(){
//     int num,tar,position;
//     int arr[100];
//     printf("ENTER THE SIZE OF THE ARRAY BETWEEN 100 AND 0:");
//     scanf("%d",&num);
//     if(num>100 || num<=0 ){
//         printf("INVALID NUMBER");
//         return 0;
//     }
//     for(int i=0;i<num;i++){
//         printf("ENTER THE %d INDEXED VALUE:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("ENTER THE POSITION WHERE YOU WANT TO ADD A NUMBER:");
//     scanf("%d",&position);
//     printf("ENTER THE TARGETED VALUE:");
//     scanf("%d",&tar);
//     for(int i=num;i>=position-1;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[position-1]=tar;
//     for(int i=0;i<=num;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }

//WRITE A PROGRAM TO DELETE AN ELEMENT IN AN ARRAY AT THE BEGINNING

// #include <stdio.h>

// int main(){
//     int num;
//     int arr[100];
//     printf("ENTER THE NUMBER OF THE ELEMENT OF THE ARRAY:");
//     scanf("%d",&num);
//     if(num>100 || 0>=num){
//         printf("INVALID NUMBER");
//         return 0;
//     }
//     for(int i=0;i<num;i++){
//         printf("ENTER THE %d INDEXED VALUE:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<num;i++){
//         arr[i]=arr[i+1];
//     }
//     for(int i=0;i<num-1;i++){
//         printf("%d\t",arr[i]);
//     }
// }


//WRITE A PROGRAM TO DELETE AN ELEMENT IN AN ARRAY AT THE END

// #include <stdio.h>

// int main(){
//     int num;
//     int arr[100];
//     printf("ENTER THE ELEMENT OF THE ARRAY:");
//     scanf("%d",&num);
//     if(num>=100 || num<=0){
//         printf("INVALID NUMBER");
//         return 0;
//     }
//     for(int i=0;i<num;i++){
//         printf("ENTER THE %d INDEX VALUE:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<num-1;i++){
//         printf("%d\t",arr[i]);
//     }
// }


//WRITE A PROGRAM TO DELETE AN ELEMENT IN AN ARRAY AT THE SPECIFIC POSITION

//    #include <stdio.h>
//    int main(){
//     int num,position;
//     int arr[100];
//     printf("ENTER THE NUMBER OF THE ELEMENT IN THE ARRAY:");
//     scanf("%d",&num);
//     if(num>=100 || num<=0){
//         printf("INVALID NUMBER");
//         return 0;
//     }
//     for(int i=0;i<num;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("ENTER THE POSITION WHICH YOU WANT TO DELETE:");
//     scanf("%d",&position);
//     for(int i=position-1;i<num;i++){
//         arr[i]=arr[i+1];
//     }
//     for(int i=0;i<num-1;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
//    }

 //WRITE A PROGRAM TO MERGE TWO ARRAYS.

//  #include <stdio.h>

//  int main(){
//     int num,num2;
//     int arr[100],arr2[100];
//     printf("ENTER THE ELEMENT OF THE 1st AND 2nd ARRAY:");
//     scanf("%d %d",&num,&num2);
//     if(num>=100 || num<=0|| num2>=100 || num2<=0){
//         printf("INVALID INPUT");
//         return 0;
//     }
//     printf("------FIRST ARRAY--------\n");
//     for(int i=0;i<num;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("------SECOND ARRAY--------\n");
//     for(int i=0;i<num2;i++){
//         scanf("%d",&arr2[i]);
//     }
//     for(int j=0;j<num+num2;j++){
//         arr[num+j]=arr2[j];
//     }
//     printf("MERGED ARRAY\n");
//     for(int i=0;i<num+num2;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;

//  }

//WRITE A PROGRAM TO SEARCH AN ELEMENT IN AN ARRAY USING LINEAR SEARCH

#include <stdio.h>
int main(){
    int num,tarVal;
    int arr[100];
    printf("ENTER THE NUMBER OF ELEMENT IN THE ARRAY:");
    scanf("%d",&num);
    if(num>=100 || num<=0){
        printf("INVALID NUMBER");
        return 0;
    }
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("ENTER YOUR TARGETED VALUE:");
    scanf("%d",&tarVal);
    for(int i=0;i<num;i++){
        if(tarVal==arr[i]){
            printf("YOUR TARGETED VALUE COMES ON %d INDEXED VALUE.\n",i);
        }
    }
    return 0;
}