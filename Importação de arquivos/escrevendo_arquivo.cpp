#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    string nomearq; // nome do arquivo a ser lido
    ofstream arqout; // handle para escrita
    ifstream arqin;  // handle para leitura
    double numeros;

    cin >> nomearq;

    // Abrindo o arquivo para escrita
    arqout.open(nomearq);

    // Verificando se o arquivo foi aberto com sucesso
    if (arqout.is_open())
    {
        // Lendo os números do usuário e escrevendo no arquivo
        while (cin >> numeros && numeros != 0)
        {
            arqout << numeros << " ";
        }

        // Fechando o arquivo de saída
        arqout.close();

        // Abrindo o arquivo para leitura
        arqin.open(nomearq);

        // Verificando se o arquivo foi aberto com sucesso
        if (arqin.is_open())
        {
            // Lendo e mostrando os números do arquivo com duas casas decimais
            cout << fixed << setprecision(2);
            while (arqin >> numeros)
            {
                cout << numeros;
                if (arqin >> ws && !arqin.eof())
                    cout << " ";
            }

            // Fechando o arquivo de entrada
            arqin.close();
        }
        
        else
        {
            cout << "Erro ao abrir o arquivo para leitura." << endl;
        }
    }
    else
    {
        cout << "Erro ao abrir o arquivo para escrita." << endl;
    }

    return 0;
}