#include <stdio.h>
#include <iostream>

using namespace std;

int max( int a, int b )
{
    if( a > b ){
     
	printf("the first nunber is biger!");
     }else{
	
	printf("the second number is biger!");
     }
     
     return a+b;
} 

int main()
{
    int i, j, k ;
    i = 2;
    j = 5;
    k = max(i, j);
    
    cout << "hello world!" << endl;
    printf("%d\n",k);
    
    return 0;
    
    
}
