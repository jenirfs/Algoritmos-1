#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int calc_raizes(float a, float b, float c, float&x1, float &x2)
{
    float delta;
    
    delta = b*b - 4 * a * c;
    
    if(delta >= 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        return 0;
    }
    else
    {
        cout << "Impossivel calcular";
        return 1;
    }
    
}

int main()
{
    float n1;
    float n2;
    float n3;
    float x1=0.00;
    float x2=0.00;
    int result;
    
    cin >> n1 >> n2 >> n3;
    
    result = calc_raizes(n1, n2, n3, x1, x2);
   
    if(result == 0)
    {
        if (n1 == 0)
        {
            cout << "Impossivel calcular" << endl;
            result = 1;
        }
        else if(x1==x2)
        {
            cout << fixed << setprecision(5);
            cout << "x = " << x1 << endl;
        }
        else
        {
           cout << fixed << setprecision(5);
            cout << "x1 = " << x2 << endl;
            cout << "x2 = " << x1 << endl; 
        }
    }    
  
    
    return 0;
}