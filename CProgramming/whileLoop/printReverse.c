//print number in reverse order with difference of 2
#include<stdio.h>
int main(){
    int i=10;
    while(i>=1){
        if (i%2==0) {
            printf("%d\t",i);
        }
        i--;
    }
   printf("\n");
}