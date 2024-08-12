#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
    double A, B, C;
    double TRIANGULO;
    double CIRCULO;
    double TRAPEZIO;
    double QUADRADO;
    double RETANGULO;
    const double PI = 3.14159;
    
    cout << fixed << setprecision(1);
    cin >> A >> B >> C;
    
    TRIANGULO = (A * C)/2;
    CIRCULO = PI * (C) * (C);
    TRAPEZIO = ( (A + B) * C )/2;
    QUADRADO = B * B;
    RETANGULO = A * B;
    
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << TRIANGULO << endl;
    cout << "CIRCULO: " << CIRCULO << endl;
    cout << "TRAPEZIO: " << TRAPEZIO << endl;
    cout << "QUADRADO: " << QUADRADO << endl;
    cout << "RETANGULO: " << RETANGULO << endl;
    
    

    
    return 0;
}