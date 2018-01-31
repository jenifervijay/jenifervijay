#include<stdio.h>
#include<conio.h>
void main()
{
int hr,hr1,min,min1,ti,ti1;
clrscr();
printf("enter hour1:");
scanf("%d",&hr);
printf("enter minutes1:");
scanf("%d",&min);
printf("enter hour2:");
scanf("%d",&hr1);
printf("enter minutes2:");
scanf("%d",&min1);
ti=hr-hr1;
ti1=min-min1;
printf("%d %d",ti,ti1);
getch();
}




