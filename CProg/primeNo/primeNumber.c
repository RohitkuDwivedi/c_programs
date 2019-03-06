#include<stdio.h>
int isPrime(int);
int main()
{
    int n;
    printf("Enter Number to check whether it is prime or not:");
    scanf("%d",&n);
    int x=isPrime(n); 
    if (x==0){
        printf("Number is Prime");
    }
    else{
        printf("Number is not Prime");

    }

}
int isPrime(int n){
    int i,no_of_div=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            no_of_div++;// to check whether number is divisible by 1 and itself only
        }
    }
    if (no_of_div==2){
            return 0;
        }
        else{
            return 1;
        }
}