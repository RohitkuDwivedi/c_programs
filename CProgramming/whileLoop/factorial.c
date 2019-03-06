#include<stdio.h>
int main(){
    int num,fact=1;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>0){
        fact*=num;
        num--;
    }
    printf("factorial of %d is %d\n",num,fact);
}