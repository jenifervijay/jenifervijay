# include <stdio.h> 
# include <conio.h>
void main() 
{ 
 int i, n=5, d ; 
 clrscr() ; 
 printf("\nEnter the number : ") ; 
 scanf("%d", &d) ; 
 printf("\nThe numbers divisible by %d are :", d) ; 
 for(i = 1 ; i <= n ; i++) 
  if(i % d == 0) 
   printf("%d", i) ; 
 getch() ; 
}
