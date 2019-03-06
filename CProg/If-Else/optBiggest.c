#include<stdio.h>
int main(){
    int a,b,c,large;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        if(a>c)
            large=a;
        else
            large=c;
    else
    {
        if(b>c)
            large=b;
        else
        {
            large=c;
        }
    }
    printf("biggest number is:%d\n",large);
    return 0;
    
}