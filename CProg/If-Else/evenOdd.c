#include<stdio.h>
int main(){
    int num;
    printf("Enter the number to verify:");
    scanf("%d",&num);
    if(num%2==0){
        printf("Number is even\n");
    }
    else{
        printf("Number is odd\n");
    }
    return 0;
}