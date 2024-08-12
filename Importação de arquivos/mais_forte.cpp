#include <iostream>
#include <string>
using namespace std;

struct dados
{
    string nome; // nome do atleta
    int n1; // nota1
    int n2; // nota2
    int n3; // nota3
    int n4; // nota4
};

int strongest(dados atletas[], int nAtletas)
{
    int i; // contador
    int soma[10];
    int maior=0;
    int vencedor=0;
    
    dados atleta[10];
    
    for(i=0; i < nAtletas; i++)
    {
        soma[i] = atleta[i].n1 + atleta[i].n2 + atleta[i].n3 + atleta[i].n4;
    }
    
    for(i=0; i < nAtletas; i++)
    {
        if(soma[i]> maior)
            maior = soma[i];
            vencedor = i;
            
            
    }
    return vencedor;
}

int main()
{
    int i; // contador
    int n; // numeros de atletas
    int venceu;
    
    dados atleta[10];
    
    cin >> n;
    
    for(i=0; i <n; i++)
    {
        getline(cin >> ws, atleta[i].nome);
        cin >> atleta[i].n1 >> atleta[i].n2 >> atleta[i].n3 >> atleta[i].n4;
    }
    
    venceu = strongest(atleta, n);
    
    cout << atleta[venceu].nome;
    
    
    
    
    
    
    return 0;
}