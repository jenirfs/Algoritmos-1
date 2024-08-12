#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main ()
{
    cout << fixed << setprecision(0);
    
    int n; // valor
    long i; //  contador
    float x; // quadrado do valor
    
    cin >> n;
    
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
          x = pow (i, 2);
          cout << i << "^2 = " << x << endl;
            
            
        }

    }
   
    
    
    
    return 0;
}