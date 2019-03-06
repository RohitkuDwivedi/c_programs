#include<stdio.h>
int main(){
    int num,rem=0,prod=1;
    printf("enter the number:");
    scanf("%d",&num);
    if(num==0){
        prod=0;
    }
    else{
        while(num>0){
            rem=num%10;
            prod*=rem;
            num/=10;
        }
    }
    printf("product of digits:%d\n",prod);
}