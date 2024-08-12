#include <iostream>
#include <iomanip>
using namespace std;

void converte(float F, float &C, float &K)
{
    
    C = (0.5555)*(F-32);
    K = C + 273;
}

int main()
{
    float fahrenheit;
    float celsius;
    float kelvin;
    
    cin >> fahrenheit;
    
    converte(fahrenheit, celsius, kelvin);
    cout << fixed << setprecision(2);
    cout << "Celsius: " << celsius << endl;
    cout << "Kelvin: " << kelvin;
    
    
    
    
    return 0;
}