#include<stdio.h>
#include<conio.h>
void main()
{
int min,hr,min1;
clrscr();
printf("\n enter minutes:");
scanf("%d",&min);
hr=min/60;
min1=min%60;
printf("hour:%d minutes:%d",hr,min1);
getch();
}
