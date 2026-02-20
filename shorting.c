#include <stdio.h>

int main(){
    int temp,num;
    printf("ENTER THE NUMBER OF THE ARRAY:");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("%d indexed value=",i+1);
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<num;i++){
        for(int j=1;j<num;j++){
            if(arr[j-1]>arr[j]){
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
      
    }
      for(int i=0;i<num;i++){
            printf("%d\t",arr[i]);
        }
}