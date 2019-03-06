#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0){
        printf("Entered number is negative\n");
    }
    else
    {
        printf("enterd number is positive\n");
    }
    return 0;
    
}