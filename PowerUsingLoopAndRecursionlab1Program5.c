//5. Write a program to calculate power using loop and recursion. [B]

#include<stdio.h>
void main(){
    int num,expo,result=1;
    
    printf("Enter the Number: ");
    scanf("%d",&num);

    printf("Enter the Exponent/Power: ");
    scanf("%d",&expo);

    for (int i=0;i<expo;i++){
        result=result*num;
    }
    
    printf("Result is %d",result);
}


#include<stdio.h>

int recursionFunc(int num, int expo){
    
}

void main(){

}