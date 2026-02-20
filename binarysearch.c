#include <stdio.h>

int main(){
    int mid,st=0,end,n,tar;
    printf("ENTER THE TARGET:");
    scanf("%d",&tar);
    printf("ENTER THE ELEMENT OF THE ARRAY:");
    scanf("%d",&n);
    int arr[n];
    
    end=n-1;
    for(int i=0;i<n;i++){
        printf("%d indexed value=",i+1);
        scanf("%d",&arr[i]);
    }
    while(st<=end){
        mid=(st+end)/2;
        if(tar>arr[mid]){
            st=mid+1;
        }else if(tar<arr[mid]){
            end=mid-1;

        }else{
            printf("AT %d POSITION TARGET FOUND",mid+1);
            return 0;
        }
    }
    printf("PROGRAM NOT FOUND\n");
    return 0;
}