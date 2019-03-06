#include<stdio.h>
#include<math.h>
int isprime(int);
int isTwinprime(int);
int main(){
    int num;
    printf("enter number to verify wheater it is Twin prime or not:");
    scanf("%d",&num);
    isprime(num);
    int x=isTwinprime(num);
    if(x){
        printf("number is Twin prime\n");
    }
    else
    {
            printf("number is not twin prime\n");
    }
    
}
int isprime(int n){
    for (int i=2;i<=(sqrt(n));i++){
        if(n%i==0){
            printf("number is not prime\n");
            return 0;
        }
        else{
             printf("number is prime\n");
            return 1;
        }
    }
}
int isTwinprime(int n){
    int x = n+2;
    printf("%d\n",x);
    int y = isprime(x);
    printf("%d\n",y);
   // int x = isprime((n+2)||(n-2));

   
    if (isprime(x)){
        printf("number is twin prime\n");
         return 1;
    }
    else {
        printf("number is not twin prime\n");
        return 0;
    }
}