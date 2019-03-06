#include<stdio.h>
int main(){
    int a=0,b=1,temp=0,n;
    printf("enter number of elements for series:");
    scanf("%d",&n);
    printf("%d,%d",a,b);
    for(int i=2;i<=n;i++){
        temp=a+b;
        printf(",%d",temp);
        a=b;
        b=temp;
        temp=0;
    }
    printf("\n");
}