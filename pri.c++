#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,f;
clrscr();
cout<<“Prime numbers between 1 to n";
cin>>n;
for(i=2;i<=n;i++)
{
f=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
f=1;
break;
}
}
if(f==0)
cout<<i<<” “;
}
getch();
}
