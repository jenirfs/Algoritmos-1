#include <iostream>
using namespace std;

int main()
{
    int n; // qtdade de numeros
    int i; //  contador
    int soma = 0;
    int a = 0;
    int b = 1;
    int prox;
    
    cin >> n;
    
    for (i = 0; i < n; i++)
    {
        cout << a << " ";
        prox = a + b;
        a = b;
        b = prox;
    }
    
    cout << endl;
    
    
    
    
    return 0;
}