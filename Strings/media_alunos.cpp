#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
   int n; // numero de alunos
   int i; // contador
   string nome[20];
   int nota1[20];
   int nota2[20];
   int nota3[20];
   int nota4[20];
   double media;
   double soma[20];
   
   cin >> n;
   
   for(i=0; i < n; i++)
   {
        getline(cin >> ws, nome[i]);
        cin >> nota1[i];
        cin >> nota2[i];
        cin >> nota3[i];
        cin >> nota4[i];
        
        soma[i] = (nota1[i] + 2*nota2[i] + 3*nota3[i] + 4*nota4[i]);
   }
   
   for(i=0; i < n; i++)
   {
       media = soma[i]/ 10;
       cout << fixed << setprecision(2);
       cout << nome[i] << ": " << media << endl;
   }
    
    return 0;
}