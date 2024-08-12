#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n; // valores
    int i; // contador
    float media = 0; // media dos valores
    int x = 0; // qtde de valores positivos
    
    
    
    for (i = 0; i < 6; i++)
    {
        cin >> n;
        if (n > 0)
        {
            x = x + 1;
            media = media + n;
        }
        
    }
    cout << fixed << setprecision(1);
    media = media/x;
    
    cout << x << " valores positivos\n";
    cout << media;
}