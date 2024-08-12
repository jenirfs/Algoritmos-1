#include <iostream>
#include <math.h>
using namespace std;

int main( )

{
    int dia, mes, ano, ds;
    double n, g, f, delta, frac, intpart;
    cin >> dia >> mes >> ano;
    
    if (mes <= 2)
    {
        g = ano - 1;
        f = mes + 13;
    }
    
    else if (mes > 2)
    {
        g = ano;
        f = mes + 1;
    }
    
    n = int(365.25 * g) + int(30.6 * f) - 621049 + dia;
    
    if (n < 36523)
    {
        delta = 2;
    }
    
    else if (n >= 36523 && n < 73048)
    {
        delta = 1;
    }
    
    else if (n >= 73048)
    {
        delta = 0;
    }
    
    frac = modf(n/7, &intpart);
    ds = round( frac * 7 ) + delta + 1;
    
    
    switch (ds)
    {
        case 1:
        {
            ds = 1;
            cout << "domingo\n";
            break;
        }
        
        case 2:
        {
            ds = 2;
            cout << "segunda-feira\n";
            break;
        }
        
        case 3:
        {
            ds = 3;
            cout << "terca-feira\n";
            break;
        }
        
        case 4:
        {
            ds = 4;
            cout << "quarta-feira\n";
            break;
            
        case 5:
        {
            ds = 5;
            cout << "quinta-feira\n";
            break;
        }
        
        case 6:
        {
            ds = 6;
            cout << "sexta-feira\n";
            break;
        }
        
        case 7:
        {
            ds = 7;
            cout << "sabado\n";
            break;
        }
        
    }
    
    return 0;
}
}

