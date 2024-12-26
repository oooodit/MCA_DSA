#include<stdio.h>
void main(){
    int n;
    int arr[n];
    int largest=arr[0];
    printf("Enter the Number of Elements you want in the array: ");
    scanf("%d",&n);

    printf("Enter %d Elements: ",n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(largest<=arr[i]){
            largest=arr[i];
        }
    }

    printf("Largest Element in the Array is: %d",largest);
}