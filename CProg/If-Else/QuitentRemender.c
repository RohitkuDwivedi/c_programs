#include<stdio.h>
int main(){
    int num1,num2,rem;
    float quitiont;
    printf("Enter two numbers");
    scanf("%d %d",&num1,&num2);
    if(num2){
    quitiont=(float)num1/num2;
    rem=num1%num2;
    printf("Quientent=%f\n",quitiont);
    printf("Remainder=%d\n",rem);
    }
    else {
        printf("divide by zero error\n");
    }
    return 0;
}