#include<stdio.h>
void swap(int, int);
int main(){
    int x,y;
    printf("Enter two numbers for swapping:\n");
    scanf("%d %d",&x,&y);
    printf("number before swapping:%d %d\n",x,y);
    swap(x,y);
}
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Number after Swapping:%d,%d\ns",a,b);
}