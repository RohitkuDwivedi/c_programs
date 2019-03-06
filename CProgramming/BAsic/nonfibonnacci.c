#include<stdio.h>
int main(){
    int a=0,b=1,temp=0,n;
    printf("enter number of elements for series:");
    scanf("%d",&n);
    int fibarr[n];
    fibarr[0]=0;
    fibarr[1]=1;
   // printf("%d,%d",a,b);
    for(int i=2;i<=n;i++){
        temp=a+b;
        fibarr[i]=temp;
        //printf(",%d",temp);
        a=b;
        b=temp;
        temp=0;
    }
    for (int i=0;i<sizeof(fibarr);i++){
        for(int j=0;j<=n;j++){
            if(j!=i){
                printf("%d",j);
            }
        }
    }
    printf("\n");
}