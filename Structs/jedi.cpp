#include <iostream>
#include <string>
using namespace std;

struct jedi
{
    string nome;
    int base;
};


int main()
{
    int n; // numero de cavaleiros
    int i; // contador
    string pesquisa; // pesquisar o cavalheiro desejado
    
    jedi dados[10]; // chamando a struct
    
    cin >> n;
    
    for(i=0; i < n; i++)
    {
       getline(cin >> ws, dados[i].nome);
       cin >> dados[i].base;
    }
    
    
    getline(cin >> ws, pesquisa);
    
    for(i=0; i <n; i++)
    {
        if(pesquisa == dados[i].nome)
        {
            cout << "Este cavaleiro esta na base " << dados[i].base;
            break;
        }
           
    }
    
    if(pesquisa!= dados[i].nome)
        cout << "Este cavaleiro nao esta cadastrado";
       
    
    return 0;
}