#include<stdio.h>
void main(){

    int n;
    printf("Enter the amount of numbers you want in the array: ");
    scanf("%d",&n);
    
    int arr[n];
    int sum = 0;
    float avg;

    printf("Enter total %d values: ",n);
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum = sum + arr[i];
    }
    avg = sum / n;

    printf("Sum of all of them is: %d",sum);
    printf("Average is: %f",avg);
}