#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()

{
    double A, B, C;
    double delta;
    double R1, R2;
    
    
    cout << fixed << setprecision(1);
    cin >> A >> B >> C;
    
    cout << fixed << setprecision(5);
    delta = (B * B) - 4 * A * C;
    
    if (delta >= 0 && A != 0)
    {
        R1 = (- B + sqrt(delta) )/ (2 * A);
        R2 = (- B - sqrt(delta) )/ (2 * A);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }
    
    else if (delta < 0 || A == 0)
    {
        cout << "Impossivel calcular\n";
    }
    
        
    
    return 0;
}