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

    int finding;
    printf("Now enter the number you want to replace: ");
    scanf("%d",&finding);
    int replace;
    printf("Now enter the number you want to replace with: ");
    scanf("%d",&replace);

    for(int i=0;i<n;i++){
        if(arr[i]==finding){
            arr[i]=replace;
            break;
        }
    }

    for(int i=0;i<n;i++){
         printf(" %d",arr[i]);
    }
}