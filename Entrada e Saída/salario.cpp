#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    int n, h;
    double s;
    double SALARIO;
    
    cin >> n >> h >> s;
    SALARIO = s * h;
    
    cout << fixed << setprecision(2);
    cout << "NUMBER = " << n << endl;
    cout << "SALARY = U$ " << SALARIO << endl;
    
    
    

    return 0;
}