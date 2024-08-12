#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
    double dinheiro;
    double preço;
    double troco;
    
    cin >> dinheiro >> preço;
    troco = dinheiro-preço;
    
    cout << fixed << setprecision(2);
    cout  << "TROCO = " << troco << endl;
    

    return 0;
}