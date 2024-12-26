#include<stdio.h>
void main(){

    int n;
    printf("Enter the Number of Elements you want in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Now enter the %d Elements: ",n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int newArr[n];
    for(int i=0;i<n;i++){
        newArr[i] = arr[i];
    }

    printf("Old Array: \n");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }

    printf("New Array: \n");
    for(int i=0;i<n;i++){
        printf(" %d",newArr[i]);
    }
}