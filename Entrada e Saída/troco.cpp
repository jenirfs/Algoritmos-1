#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
    double dinheiro;
    double pre�o;
    double troco;
    
    cin >> dinheiro >> pre�o;
    troco = dinheiro-pre�o;
    
    cout << fixed << setprecision(2);
    cout  << "TROCO = " << troco << endl;
    

    return 0;
}