#include<stdio.h>
void main()
{
float b,h,area,c,a,n;
printf("enter the value of b,a,h\n");
scanf("%f%f%f",&b,&a,&h);
area=0.5*b*h;
c=a+b+h;
printf("area of triangle =%f\n",area);
printf("perimeter of triangle=%f",c);
}
