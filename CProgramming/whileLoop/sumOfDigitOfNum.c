#include<stdio.h>
int main(){
    int num,rem=0,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        sum+=rem;
        num/=10;
        rem=0;
    }
    printf("sum of digit is %d\n",sum);
    return 0;
}