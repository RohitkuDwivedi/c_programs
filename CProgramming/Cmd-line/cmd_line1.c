//to print all comand line arguments
#include<stdio.h>
int main(int argc,char *argv[])
{
    int i;
    printf("total number of arguments=%d\n",argc);
    for(i=0;i<argc;i++)
    {
        printf("arguments are::%s\n",(argv[i]));
    }
    return 0;
}