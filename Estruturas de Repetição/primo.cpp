#include <iostream>
using namespace std;

int main()

{
    int n; //valor de entrada
    int i = 0; // divisor de n
    int divisores; // qtdade de div
    
    cin >> n;
    
    while (i < n)
    {
        n/i;
        i++;
        
        if (n%i == 0)
        {
            divisores++;
        }
    }
    if (divisores == 2)
        cout << "primo\n";
     
    else if (divisores > 2)
        cout << "nao e primo\n";
    
  
   
    
   
   
    
    
    
    return 0;
}