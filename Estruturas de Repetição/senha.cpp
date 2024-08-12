#include <iostream>
#include <string>
using namespace std;

int main()
{
    string senha;
    getline (cin >> ws, senha);
    
    while (senha != "2002")
    {
        cout << "Senha Invalida" << endl;
        getline (cin >> ws, senha);
    }

    cout << "Acesso Permitido" << endl;
    
    return 0;
}