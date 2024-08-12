#include <iostream>
using namespace std;

int main ()
{
    int n; // qtdade de valores
    int i; //contador
    int x;
    
    cin >> n;
    
    for (i = 0; i < n; i++)
    {
        cin >> x;
        
        
    if ( x == 0)
    {
       cout << "NULL";      
    }
    
    else 
        if (x % 2 == 0 )
        {
            if (x > 0)
            {
                cout << "EVEN POSITIVE" << endl;
            }
            else if (x < 0)
            {
                cout << "EVEN NEGATIVE" << endl;
            }
        }
        
        else if (x % 2 != 0)
        {
            if (x > 0)
            {
               cout << "ODD POSITIVE" << endl; 
            }
            else if ( x < 0)
            {
                cout << "ODD NEGATIVE" << endl;
            }
        }
    }
    
    return 0;
}