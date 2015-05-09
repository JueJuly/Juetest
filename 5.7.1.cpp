#include <iostream>

using namespace std ;

int main()
{
    int i, j, k;
    
    for( i = 1; i <= 9; i++){
    
        for( j = 1; j <= 9; j++){
            
            if( i >= j ){
                k = i + j;
                cout << i << " + " << j << " = " << k << " ";
            }
        }
        
        cout << endl;
    }
}
