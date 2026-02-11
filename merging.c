//SO IN THIS DIRECTORY WE MERGE TWO ARRAY

#include <stdio.h>
#include <conio.h>

int main(){
    int arr[100],arr2[100],merge[100],n,m,i;
    printf("ENTER THE SIZE OF THE FIRST ARRAY:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d INDEX VALUE:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE SIZE OF THE SECOND ARRAY:");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        printf("%d INDEX VALUE:",i+1);
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++){
        merge[i]=arr[i];
    }
    i=n;
    for(int j=0;j<m;j++){
        merge[i]=arr2[j];
        i++;
    }
    for(int i=0;i<m+n;i++){
        printf("%d\t",merge[i]);
    }
    return 0;




}