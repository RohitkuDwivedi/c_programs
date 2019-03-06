#include<stdio.h>
#include<math.h>
int isprime(int,int);
int main(){
    int startNo,endNo;
    printf("enter number to start series:");
    scanf("%d",&startNo);
    printf("enter number to end series:");
    scanf("%d",&endNo);
    int x=isprime(startNo,endNo);
}
int isprime(int start,int end){
    int i;
    for (int i=start;i<=(sqrt(start));i++){
        while(i<=end){
         if(start%i==0){
            return 0;
        }
        else {
            return 0;
        }
    }
    }
}

