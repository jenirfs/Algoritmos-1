#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int x; // 
    int inter; // gols
    int gremio; // gols
    int y = 1; // qtdade de grenais
    int vitinter = 0; // vitorias do inter
    int vitgremio = 0; // vitorias do gremio
    int empates = 0; // empates
   
    
    
    cin >> inter >> gremio;
    if (inter > gremio)
    {
        vitinter = vitinter + 1;
    }
    
    else if (inter < gremio)
    {
        vitgremio = vitgremio + 1;
    }
    else if (inter == gremio)
    {
        empates = empates + 1;
    }
    
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> x;
    
    while (x == 1)
    {
        cin >> inter >> gremio;
    
        if (inter > gremio)
        {
            vitinter++;
        }
    
        else if (inter < gremio)
        {
            vitgremio++;
        }
        else if (inter == gremio)
        {
            empates++;
        }
        
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        y++;
        cin >> x;
    }
    
    cout << y << " grenais" << endl;
    cout << "Inter:" << vitinter << endl;
    cout << "Gremio:" << vitgremio << endl;
    cout << "Empates:" << empates << endl;
    
    if (vitinter > vitgremio)
        {
            cout << "Inter venceu mais" << endl;
        }
        else if (vitinter < vitgremio)
        {
            cout << "Gremio venceu mais" << endl;
        }
        else if (vitinter==vitgremio)
        {
            cout << "Nao houve vencedor" << endl;
        }

        

    return 0;
}