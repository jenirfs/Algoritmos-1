#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct padawan
{
    string nome;
    int pontos;
    
    

};


int main()
{
    int n; // numero de padawans
    int i; // contador
    int maior=0;
    double soma;
    double media;
    int posicao_maior=0;
    padawan dados[20]; //  chamando a struct
    
    cin >> n;
    
    for(i=0; i<n; i++)
    {
        getline(cin >> ws, dados[i].nome);
        cin >> dados[i].pontos;
        
        soma = soma + dados[i].pontos;
        
        if(dados[i].pontos > maior)
        {
            maior = dados[i].pontos;
            posicao_maior = i;
        }
          
    }
    
    media = soma/n;
    
    cout << "Padawan com mais pontos: " <<dados[posicao_maior].nome << endl;
    cout << "Pontos: " << maior << endl;
    cout << fixed << setprecision(2);
    cout << "Media da turma: " << media << " pontos";
    
    return 0;
}