#include <iostream>
using namespace std;

int sinal(int n)
{
    if(n > 0)
    {
        cout << "Positivo" << endl;
    }
    else if (n < 0)
    {
        cout << "Negativo" << endl;
    }
    else if (n == 0)
    {
        cout << "Zero" << endl;
    }
    
    return n;
}



int main()
{
    int x;
    
    cin >> x;
    x = sinal(x);
    
    
    
    return 0;
}