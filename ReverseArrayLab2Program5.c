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

    printf("Reverse of it:");
    for(int i=n-1; i>=0;i--){
        printf("%d",arr[i]);
    }
}