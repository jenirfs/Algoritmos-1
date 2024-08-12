#include <iostream>
using namespace std;

int main()
{
    int x; // quantidade de usuarios
    int contatos[100]; //numero de contatos do usuario
    int i; // contador
    int menor = 100000;
    int maior=0;
    
    cin >> x;
    
    for(i=0; i < x; i++)
    {
        cin >> contatos[i];
        
        if(contatos[i] < menor)
            menor = contatos[i];
        else if (contatos[i] > maior)
            maior = contatos[i];
        
    }
    
    
    cout << "Menor numero de contatos: " << menor << endl;
    cout << "Maior numero de contatos: " << maior << endl;
    
    return 0;
}