#include<stdio.h>
#include<conio.h>
void main()
{
int ar[10],lar,i,size;
clrscr();
printf("enter the size of the element");
scanf("%d",&size);
printf("enter the element list:");
for(i=0;i<=size;i++)
scanf("%d",&ar[i]);
lar=ar[0];
for(i=0;i<=size;i++)
{
if(lar<ar[i]);
lar=ar[i];
}
printf("the maximum element is%d:",lar);
getch();
}
