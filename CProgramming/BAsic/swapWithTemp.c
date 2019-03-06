#include<stdio.h>
int swap(int, int);
int main(){
int x,y;
printf("Enter two numbers for swapping:\n");
scanf("%d %d",&x,&y);
printf("number before swapping:%d %d\n",x,y);
swap(x,y);
}
int swap(int a,int b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    printf("number after swapping %d,%d\n",a,b);
}