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

#include <stdio.h>

int main(){
    int num,tar,position;
    int arr[100];
    printf("ENTER THE SIZE OF THE ARRAY BETWEEN 100 AND 0:");
    scanf("%d",&num);
    if(num>100 || num<=0 ){
        printf("INVALID NUMBER");
        return 0;
    }
    for(int i=0;i<num;i++){
        printf("ENTER THE %d INDEXED VALUE:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE POSITION WHERE YOU WANT TO ADD A NUMBER:");
    scanf("%d",&position);
    printf("ENTER THE TARGETED VALUE:");
    scanf("%d",&tar);
    for(int i=num;i>=position-1;i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=tar;
    for(int i=0;i<=num;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}