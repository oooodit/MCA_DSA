#include<stdio.h>
void main(){

    int n;
    printf("Enter the Number of Elements you want in the array: ");
    scanf("%d",&n);
    int arr1[n];
    printf("Now enter the %d Elements: ",n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    
    int arr2[n];
    printf("Now enter the %d Elements: ",n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                printf(" %d ",arr1[i]);
                break;
            }
        }
    }
}