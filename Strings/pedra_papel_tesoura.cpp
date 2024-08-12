#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; // numero de testes
    int i; // contador
    string jogadorA[10];
    string jogadorB[10];
    
    
    cin >> n;
    
    for(i=0; i < n; i++)
    {
        getline(cin >> ws, jogadorA[i]);
        getline(cin >> ws, jogadorB[i]);
        
  
    }
    
    for(i=0; i<n; i++)
    {
        if(jogadorA[i] == "pedra")
        {
            if(jogadorB[i] == "papel")
            {
                cout << "Jogador B" << endl;
            }
            else if(jogadorB[i] == "tesoura")
            {
                cout << "Jogador A" << endl;
            }
            else if (jogadorB[i] == "pedra")
            {
                cout << "Empate" << endl;
            }
        }
        else if(jogadorA[i] == "tesoura")
        {
            if(jogadorB[i] == "papel")
            {
                cout << "Jogador A" << endl;
            }
            else if(jogadorB[i] == "tesoura")
            {
                cout << "Empate" << endl;
            }
            else if (jogadorB[i] == "pedra")
            {
                cout << "Jogador B" << endl;
            }
        }
        else if(jogadorA[i] == "papel")
        {
            if(jogadorB[i] == "papel")
            {
                cout << "Empate" << endl;
            }
            else if(jogadorB[i] == "tesoura")
            {
                cout << "Jogador B" << endl;
            }
            else if (jogadorB[i] == "pedra")
            {
                cout << "Jogador A" << endl;
            }
        }
        
    }    
      
    
    
    
    return 0;
}