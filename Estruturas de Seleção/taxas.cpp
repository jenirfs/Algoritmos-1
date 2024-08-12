#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main()
{
    double salario, taxa;
    
    cout << fixed << setprecision(2);
    cin >> salario;
    
   if (salario <= 2000.00)
   {
        cout << "Isento\n";
   }
    
    else if (salario > 2000.00 && salario <= 3000.00)
    {
        taxa = (salario - 2000.00) * 0.08;
        cout << "R$ " << taxa << endl;
    }
    
    else if (salario > 3000.00 && salario < 4500.00)
    {
        taxa = (salario - 3000.00) * 0.18 + (1000.00 * 0.08);
        cout << "R$ " << taxa << endl;
    }
    
    else if (salario > 4500.00)
    {
        taxa = (salario - 4500.00) * 0.28 + (1500.00 * 0.18) + (1000 * 0.08);
        cout << "R$ " << taxa << endl;
    }

    
    
    return 0;
}