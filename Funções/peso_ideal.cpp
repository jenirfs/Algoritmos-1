#include <iostream>
#include <iomanip>
using namespace std;

float ideal (float h, char sexo)
{
    float p;
    
    if(sexo == 'M')
        p = (72.7*h) - 58;
    else if(sexo == 'F')
        p = (62.1*h) - 44.7;
        
        return p;
}



int main()
{
    char sexo;
    float h;
    float peso;
    
    cin >> h;
    cin >> sexo;
    
    peso = ideal(h, sexo);
    
    
    cout << fixed << setprecision(2);
    cout << "Peso ideal = " << peso << " kg";
    
    
    
    
    return 0;
}