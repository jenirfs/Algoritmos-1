#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n; // numeros de entrada
    int x; // numeros positivos
    int i; // contador

    x = 0;
    i = n;
    
    for (i = 0; i < 6; i++)
    {
        cin >> n;
         if (n > 0 && n!= 0)
        {
            x = x + 1;
        }
        
    }
    
    cout << x << " valores positivos\n";
    
   
    
    return 0;
}