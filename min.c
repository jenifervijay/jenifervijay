#include <stdio.h>
#include<conio.h>
void  main() 
    {    
    int ar[100], min, size, c, location = 1;
    
    printf("Enter the size of the element");
    scanf("%d",&size);
    
    printf("Enter %d integers\n", size);
    
    for ( c = 0 ; c < size ; c++ )
    scanf("%d", &ar[c]);    
    
    min= ar[0];
    
    for ( c = 1 ; c < size ; c++ ) 
    {
        if ( ar[c] < min) 
        {
min = ar[c];
location = c+1;
        }
    } 
    
    printf("Minimum element in the given list is%d",min);
    getch();
}
