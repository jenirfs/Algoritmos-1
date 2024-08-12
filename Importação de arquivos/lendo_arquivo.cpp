#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ifstream arqin; // handle para leitura
    string nomearq; // Nome do arquivo a ser lido

    cin >> nomearq;

    // Abre o arquivo
    arqin.open(nomearq);

    // Verificando se o arquivo foi aberto com sucesso
    if (arqin.is_open()) 
    {
        // Lendo o conte�do do arquivo linha por linha
        string linha;
        
        while (getline(arqin, linha)) 
        {
            cout << linha << endl;
        }

        // Fechando o arquivo ap�s a leitura
        arqin.close();
    } 
    else 
    {
        // Se o arquivo n�o p�de ser aberto, exibe uma mensagem de erro
        cerr << "Erro ao abrir o arquivo " << nomearq << endl;
    }

    return 0;
}