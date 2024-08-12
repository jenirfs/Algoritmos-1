#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i; // contador
    int n; // qtdade de valores
    float h = 0; // valor final
    float a = 0;
    float b = 1;
    float x;
   
    
    
    cin >> n;
    
    
    for (i = 0; i < n; i++)
    {
        a = a + b;
        x = 1/a;
        h = h + x;
    }

    cout << fixed << setprecision(4);
    cout << h << endl;
    
    
    return 0;
}