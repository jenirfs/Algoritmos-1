#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int qtdade_alunos; 
    double notas[100];
    double media;
    int i;
    double x=0;
    int maior_media=0;
    int menor_media=0;
    
    cin >> qtdade_alunos;
    
    for(i = 0; i < qtdade_alunos; i++)
    {
        cin >> notas[i];
        x = notas[i] + x;
        
    }
    
    
    media = x/qtdade_alunos;
   
   
   for (i = 0; i < qtdade_alunos; i++)
   {
        if (notas[i] >= media)
        {
            maior_media++;
        }
        else if (notas[i] < media)
        {
            menor_media++;
        }
       
       
   }
       
    
    
    
    cout << fixed << setprecision(2);
    cout << "Media da turma: " << media << endl;
    cout << "Alunos com nota acima da media: " << maior_media << endl;
    cout << "Alunos com nota abaixo da media: " << menor_media << endl;
    
    
    
    
    
    
    
    
    
    return 0;
}