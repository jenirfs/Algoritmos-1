#include <iostream>
#include <iomanip>
using namespace std;

struct stormtrooper
{
  int id; // numero de identificacao
  double im; // indice de maldade
  double fa; // forca de abate
  double ga; // grau de aptidao
};

int main()
{
   stormtrooper dados[100];
   double maior=0;
   int i=0;
   int posicao_maior = 0;
   int x;
   bool aux = true;
   
   
   while (aux)
   {
        cin >> x;
        if(x != 0)
        {
            dados[i].id = x;
            cin >> dados[i].im;
            cin >> dados[i].fa;
            dados[i].ga = (dados[i].im + dados[i].fa)/2;
            if (dados[i].ga > maior)
                {
                    maior = dados[i].ga;
                    posicao_maior = i;
                }
        }
        else
        {
            aux = false;
        }
        
       
        i++;
   }
   
   
    cout << "Stormtrooper escolhido: " << dados[posicao_maior].id << endl;
    cout << "GA = " << maior << endl;
    
    
    
    
    return 0;
}