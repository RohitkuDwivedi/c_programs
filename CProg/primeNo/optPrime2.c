#include<stdio.h>
#include<math.h>
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
    int i;
    for(i=2;i<(sqrt(n)+1);i++){
        if(n%i==0){
          return 1;  
        }
    }
       return 0;
        
}