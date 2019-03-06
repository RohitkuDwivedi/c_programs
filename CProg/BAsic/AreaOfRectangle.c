//Area and Perimeter of the Rectangle
#include<stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("enter the length of the rectangle:");
    scanf("%d",&l);
    printf("enter the Bredth of the rectangle:");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("Area of rectangle = %d\n",area);
    printf("Perimeter of Rectangle = %d\n",perimeter);
    return 0;
}