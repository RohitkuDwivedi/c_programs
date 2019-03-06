#include<stdio.h>
int main(){
    int yr;
    printf("enter year to check:");
    scanf("%d",&yr);
    // leap yr is the year which is divided by 4 and 400 but not divisible by 100
    if(yr%400==0||yr%4==0&&yr%100!=0){
        printf("%d is a leap year\n",yr);
    }
    else
    {
        printf("%d is not leap year\n",yr);
    }
    return 0;
}