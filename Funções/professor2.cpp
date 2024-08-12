#include <iostream>
#include <iomanip>
using namespace std;

int nAbaixo(int notas[], int nAlunos, float media)
{
  
    int i; // contador
    int abaixo=0;
    
    for(i=0; i < nAlunos; i++)
	{
		if(notas[i] < media)
    		abaixo++;
    }
    
    return abaixo;
}

int nAcima(int notas[], int nAlunos, float media)
{
  
    int i; // contador
    int acima=0;
    
    for(i=0; i <nAlunos; i++)
	{
		if(notas[i] >= media)
        	acima++;
    }
    return acima;
}

int main()
{
    float media; //media
    int n; // nAlunos
    int nota[20]; // notas dos alunos
    int i; // contador
    float soma=0;
    int ab; // abaixo
    int ac; // acima
    
    cin >> n;
    
    for(i=0; i < n; i++)
    {
        cin >> nota[i];
        soma = soma + nota[i];
    }
    
    media = soma/ n;
    
    ab = nAbaixo(nota, n, media);
    ac = nAcima(nota, n, media);

    cout << fixed << setprecision(2);
    cout << "Media da turma = " << media << endl;
    cout << fixed << setprecision(0);
    cout << "Alunos com nota abaixo da media: " << ab << endl;
    cout << "Alunos com nota acima da media: " << ac << endl;
    
    
    return 0;
}