#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double num1[10];
    int num2[10];
    string operador[10];
    double resultado[10];
    int n; // numero de casos
    int i;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> num1[i];
    }
    
    for(i = 0; i < n; i++)
    {
        cin >> num2[i];
    }
    
    for(i = 0; i < n; i++)
    {
        cin >> operador[i];
    }
   
    for(i = 0; i < n; i++)
    {
        if(operador[i] == "*")
        {
            resultado[i] = num1[i]*num2[i];
            cout << num1[i] << " * " << num2[i] << " = " << resultado[i] << endl;
        }
        else if(operador[i] == "-")
        {
            resultado[i] = num1[i]-num2[i];
            cout << num1[i] << " - " << num2[i] << " = " << resultado[i] << endl;
        }
        else if(operador[i] == "+")
        {
            resultado[i] = num1[i]+num2[i];
            cout << num1[i] << " + " << num2[i] << " = " << resultado[i] << endl;
        }
        else if(operador[i] == "/")
        {
            resultado[i] = num1[i]/num2[i];
            cout << num1[i] << " / " << num2[i] << " = ";
            cout << fixed << setprecision(2);
            cout << resultado[i] << endl;
        }
    }
    
    return 0;
}