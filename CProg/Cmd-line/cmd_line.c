//to print program name and number of count of arguments
#include <stdio.h>
int main (int argc,char *argv[])
{
    int i=argc;
    char *a = argv[0];
    char *b = argv[1];
    printf("No of arguments=%d\n",i);
    printf("Program Name=%s\n",a);
    printf("First command line argument=%s\n",b);
    return 0;
}