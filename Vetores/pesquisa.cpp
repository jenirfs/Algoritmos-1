#include <iostream>
using namespace std;

int main()
{
	int vet[20]; // vetor
	int i; // contador
	int pesquisa; // num desejado
	int tam=0;
	
	
	for(i=0; i < 20; i++)
	{
		cin >> vet[i];
		if(vet[i]==0)
		{
			break;
		}
		tam++;
	}
	
	cin >> pesquisa;
	
	for(i=0; i < tam; i++)
	{
		
		if(vet[i]== pesquisa)
		{
			cout << "Elemento " << pesquisa << " encontrado na posicao " << i;
			break;	
		}
	}
	if(vet[i]!= pesquisa)
		cout << "Elemento " << pesquisa << " nao foi encontrado";
	else if (pesquisa==0)
	    cout << "Elemento " << pesquisa << " nao foi encontrado"; /// full gambiarra
	
 
	return 0;
}