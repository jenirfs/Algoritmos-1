#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()

{
    double C;
    double i;
    double M;
    int t;
    double lucro;
    
    cin >> C >> i >> t;
    M = C * pow (1 + (i/100), t);
    lucro = M - C;
    
    cout << fixed << setprecision(2);
    cout << "LUCRO = " << lucro << endl;
    
    

    return 0;
}