#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    ifstream arqin; // handle para leitura
    string nomearq; // nome do arquivo a ser lido
    int i; // contador
    double soma=0;
    int n=0;
    double media;
    
    cin >> nomearq;
    
    arqin.open(nomearq); // abrindo o arquivo
    
    if(arqin.is_open())
    {
        double linha;
        
        for(i=0; i<24 && arqin >> linha; i ++) 
        {
            soma = soma + linha;
            n++;
        }
        
        if ( n > 0)
        {
            media = soma/n;
            cout << fixed << setprecision(1);
            cout << "Temperatura media: " << media << " graus" << endl;
        }
        
        arqin.close(); // fechando o arquivo
    }
    else 
    {
        cout <<"Erro ao abrir o arquivo " << nomearq << endl;
    }
    
    
    
    
    return 0;
}