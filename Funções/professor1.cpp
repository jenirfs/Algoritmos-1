#include <iostream>
#include <iomanip>
using namespace std;

float media(int notas[], int nAlunos)
{
    float m; // media
	float soma; // soma das notas
	int i; // contador
	
	for (i=0; i<nAlunos; i++)
	{
	    soma = soma + notas[i];
	}
	
	m = soma/nAlunos;
	
	return m;
}

int main()
{
    double med; // media
    int nota[10]; // notas dos alunos
    int num; // numero de alunos
    int i; // contador
    
    cin >> num;
    
    for(i=0; i<num; i++)
    {
        cin >> nota[i];
    }
    
    med = media(nota, num);
    
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << med;
    
    return 0;
}