//ARRAY INSERTION 
//ADDING THE ELEMENT IN THE FIRST INDEX VALUE

// #include <stdio.h>
// #include <conio.h>

// int main(){
//    int arr[100];//HERE THE ARRAY SIGN DEFINE FISTLY BECAUSE OF THE BLANK OF THE LAST DIGIT ADJESTMENT 
//    int n,num;
//     printf("ENTER THE SIZE OF ARRAY IN RANGE OF 100:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("%d:",i+1);
//         scanf("%d",&arr[i]);

//     }
//     for(int i=n-1;i>=0;i--){
//         arr[i+1]=arr[i];//HERE IS THE CONCEPT OF REMOVING THE LAST ELEMENT FROM IT BOX TO ANOTHER
//     }
    
//     printf("ENTER THE VALUE WHICH YOU WANT TO INSERT:");
//     scanf("%d",&num);
//      arr[0]= num;
//      n++;//HERE THE N VALUE GIVES ++ BECAUSE OF THE PRINTING OF THE LAST DIGIT
//      for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//      }
//      return 0;
// }

//NEXT INSERTION
//ADDING THE VALUE AT THE END OF THE ARRAY 

// #include <stdio.h>
// #include <conio.h>

// int main(){
//     int arr[100];
//     int n,num;
//     printf("ENTER THE SIZE OF THE ARRAY:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("%d:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("ENTER THE NUMBER YOU WANT TO ADD IN THE END:");
//     scanf("%d",&num);
//     arr[n]=num;
//     n++;
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }


//NEXT AND LAST INSERTION
//AT AN SPECIFIC POSITION

#include <stdio.h>
#include <conio.h>

int main(){
    int arr[100],num,item,n;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("%d INDEX VALUE:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE POSITION WHERE YOU WANT TO ADD THE ELEMENT:");
    scanf("%d",&n);
    for(int i=num-1;i>=n-1;i--){
        arr[i+1]=arr[i];
    }
    printf("ENTER THE VALUE YOU HAVE TO INSERT IN THE SPECIFIC POSITION:");
    scanf("%d",&item);
    
    arr[n-1]=item;
     num++;
    for(int i=0;i<=num-1;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}