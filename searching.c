//IN THIS DIRECTORY I PERFORMED THE SEARCHING OF ARRAY LIKE LINEAR AND BINARY
//SO FIRSTLY LINEAR

#include <stdio.h>
#include <conio.h>

int main(){
    int arr[100],num,track;
    int sum=0;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("%d INDEXED VALUE:",i+1);
        scanf("%d",&arr[i]);
        
    }
    printf("ENTER THE VALUE WHICH WE  HAVE TO TRACK:");
    scanf("%d",&track);
    for(int i=0;i<num;i++){
        if(arr[i]==track){
         printf("THE TRACTED VALUE AT:%d\n",i+1);
         sum=sum+1;
        } 
    }

    if(sum==0){
        printf("THE NUMBER YOU ENTERED IS NOT FOUND IN ARRAY");
    }else{
        printf("THE %d NUMBER APPERED IN THE ARRAY:%d",track,sum);
    }
    return 0;

}