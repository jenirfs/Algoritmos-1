#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; // numero de jogadores
    int i; // contador
    string nome[10];
    int idade[10];
    
    
    cin >> n; // numero de atletas
    for(i=0; i < n; i++)
    {
        getline(cin >> ws, nome[i]);
        cin >> idade[i];
    }
    
    for(i=0; i< n; i++)
    {
        if(idade[i] >= 18)
        {
            cout << nome[i];
            cout << " " << idade[i] << endl;
        }
    }
    
    return 0;
}

