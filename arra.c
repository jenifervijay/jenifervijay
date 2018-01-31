#include <stdio.h>
#include<conio.h>
void main()
{
  int a[5],n,i;
  clrscr();
  printf("Enter the no of element:");
  scanf("%d",&n);
  printf("Elements are:");
  for( i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for( i=0;i<n;i++)
  {
    printf("%d %d\n",i,a[i]);
  }
  getch();
}
  
