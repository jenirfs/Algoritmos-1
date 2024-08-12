#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    int i; // contador
    int x = 0; // valores pares
    
    for (i = 0; i < 5; i++)
    {
        cin >> n;
        {
            if (n % 2 == 0)
            {
                x = x + 1;
            }
        }
    }
    
    cout << x << " valores pares\n";
    
    
    
    
    return 0;
}