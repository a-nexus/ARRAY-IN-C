//BUBBLE SHORTING
// #include <stdio.h>

// int main(){
//     int temp,num;
//     printf("ENTER THE NUMBER OF THE ARRAY:");
//     scanf("%d",&num);
//     int arr[num];
//     for(int i=0;i<num;i++){
//         printf("%d indexed value=",i+1);
//         scanf("%d",&arr[i]);

//     }
//     for(int i=0;i<num;i++){
//         for(int j=1;j<num;j++){
//             if(arr[j-1]>arr[j]){
//                 temp=arr[j-1];
//                 arr[j-1]=arr[j];
//                 arr[j]=temp;
//             }
//         }
      
//     }
//       for(int i=0;i<num;i++){
//             printf("%d\t",arr[i]);
//         }
// }

//SLECTION SHORTING

// #include <stdio.h>

// int main(){
//     int num,temp;
//     printf("ENTER THE ELEMENT OF THE ARRAY:");
//     scanf("%d",&num);
//     int arr[num];
//     for(int i=0;i<num;i++){
//         printf("%d indexed value=",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<num;i++){
//         int smallest=i;
//         for(int j=i+1;j<num;j++){
//             if(arr[j]<arr[smallest]){
//                smallest=j;
//             }
//         }
//           temp=arr[i];
//                 arr[i]=arr[smallest];
//                 arr[smallest]=temp;
//     }
//     for(int i=0;i<num;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }

//INSERTION SHORTING

#include <stdio.h>

int main(){
    int temp,num,arr[100],tar;
    printf("ENTER THE NUMBER OF ELEMENT=");
    scanf("%d",&num);
    if(num>=100){
        printf("INVALID INPUT");
        return 0;
    }
    printf("ENTER YOUR TARGET NUMBER:");
    scanf("%d",&tar);
    
    for(int i=0;i<num;i++){
        printf("%d indexed value=",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num-1;i++){
        int smaller=i;
        for(int j=i+1;j<num;j++){
            if(arr[j]<arr[smaller]){
            smaller=j;
        }
    }
    temp=arr[smaller];
    arr[smaller]=arr[i];
    arr[i]=temp;

}
int i;

for( i=num-1;i>=0 && arr[i]>tar;i--){
    
       arr[i+1]=arr[i];  
    
   
}
arr[i+1]=tar;
num++;
for(int i=0;i<num;i++){
    printf("%d\t",arr[i]);
}
return 0;
}