#include<stdio.h>
int main()
{
int n;
printf("enter the n value:");
scanf("%d",&n);
if(n>0)
{
printf("the given number is positive");
}
else if(n<0)
{
printf("the given number is negative");
}
else
{
printf("zero");
}
}
