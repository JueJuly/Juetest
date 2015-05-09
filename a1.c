#include <stdio.h>

int max( int a, int b )
{
    if( a > b ){
     
	printf("the first nunber is biger!");
     }else{
	
	printf("the second number is biger!");
     }
     
     return a+b;
} 

void main()
{
    int i, j, k ;
    i = 2;
    j = 5;
    k = max(i, j);
    
    printf("%d\n",k);
    
    
}
