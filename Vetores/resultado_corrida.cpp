#include <iostream>
using namespace std;

int main()
{
    double corredor[20];
    double x;
    int i; // posicao, contador
    int tam=-1; // tamanho do vetor
   
    
   for(i=0; i < 20; i++)
   {
   		cin >> corredor[i];
   		tam = tam + 1;
   		if(corredor[i]== -1)
		{
		   break;	
		}
   }
    
	cout << "Classificacao:" << endl;
    
    for (i=0; i <=tam; i++)
    {
    	
      
        
    }
    return 0;
}