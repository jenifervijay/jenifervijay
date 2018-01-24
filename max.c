#include <stdio.h>
#include<conio.h>
void  main() 
    {    
    int ar[100], max, size, c, location = 1;
    
    printf("Enter the size of the element");
    scanf("%d",&size);
    
    printf("Enter %d integers\n", size);
    
    for ( c = 0 ; c < size ; c++ )
    scanf("%d", &ar[c]);    
    
    max= ar[0];
    
    for ( c = 1 ; c < size ; c++ ) 
    {
        if ( ar[c] >max) 
        {
max = ar[c];
location = c+1;
        }
    } 
    
    printf("Minimum element in the given list is%d",max);
    getch();
}
