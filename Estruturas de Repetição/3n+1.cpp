#include <iostream>
using namespace std;

int main ()
{
    int i; // entrada1
    int j; // entrada2
    int n; // auxiliar
    int ciclo; // qtdade de ciclo
    int maiorCiclo = -1; // maior ciclo
    int x; // contador
    
    
    
    cin >> i >> j;
    
    if ( i > j)
    {
        for(x = j; x <= i; x++)
        {
            n = x;
            ciclo = 1; // comprimento de ciclo
        
            while (n != 1)
            {
          
                if (n % 2 == 0)
                {
                    n = n/2;
            
                } 
                else
                {
                    n = 3*n + 1;
                }
                ciclo++;
            }
            
                if (ciclo > maiorCiclo)
                maiorCiclo = ciclo;
        }
    
    }
    else
    {
         for(x = i; x <= j; x++)
        {
            n = x;

            ciclo = 1; // comprimento de ciclo
            
            while (n != 1)
            {
              
                if (n % 2 == 0)
                {
                    n = n/2;
                
                } else
                {
                    n = 3*n + 1;
                  
                }
                ciclo++;
            }
            
            if (ciclo > maiorCiclo)
                maiorCiclo = ciclo;
        }
    }
    
    cout << i << " " << j << " " << maiorCiclo;
    
    
    
    return 0;
}