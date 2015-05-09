#include <iostream>

using namespace std;

int max( int a, int b )
{
    if( a > b ){
     
	cout << "the first nunber is biger!" << endl;
     }else{
	
	cout << "the second number is biger!" << endl;
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
    cout << "the max number : " << k << endl;
    
    return 0;
}
