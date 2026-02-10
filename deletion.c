//HERE IN THIS DIRECTORY I PERFERMED ALL THE DELETION IN THE ARRAY
//FIRST IN THE DELETING IN THE END

#include <stdio.h>
#include <conio.h>

int main(){
    int arr[100],num,item;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("%d INDEXED VALUE IS:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
       arr[i]=arr[i+1];  //HERE IS THE CONCEPT BETWEEN THE DELETION OF THE FIRST ELEMENT
    }
    
    num--;//IF WE DONT USE N-- THEN THE FIRST ELEMENT WHICH WE DELETE FROM THE ARRAY IT COME BACK IN THE LAST
    for(int i=0;i<num;i++){
       printf("%d\t",arr[i]);
    }
}