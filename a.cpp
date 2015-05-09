#include <iostream>

int max( int a, int b )
{
    if( a > b ){
     
	std::cout << "the first nunber is biger!" << endl;
     }else{
	
	std::cout << "the second number is biger!" << endl;
     }
     
     return a+b;
} 

int main()
{
    int i, j, k ;
    i = 2;
    j = 5;
    k = max(i, j);
    std::cout << "hello world!" << endl;
    std::cout << "the max number : " << k << endl;
    
    return 0;
}
