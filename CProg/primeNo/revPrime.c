#include<stdio.h>
#include<math.h>
int isprime(int);
int main(){
    int num;
    printf("enter number to verify:");
    scanf("%d",&num);
    int x=isprime(num);
    if(x){
        printf("number is prime\n");
    }
    else
    {
            printf("number is not prime\n");
    }
    
}
int isprime(int n){
    for (int i=2;i<=(sqrt(n));i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}