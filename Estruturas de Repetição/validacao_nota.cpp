#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    float media;
    float n1; // nota 1
    float n2; // nota 2
    float x;
    
    cin >> n1;
    
    while (n1 < 0 || n1 > 10)
    {
        cout << "nota invalida" << endl;
        cin >> n1;
    }
    
    cin >> n2;
    
    while (n2 < 0 || n2 > 10)
    {
        cout << "nota invalida" << endl;
        cin >> n2;
    }
    
    media = (n1 + n2)/2;
    
    cout << fixed << setprecision(2);
    cout << "media = " << media << endl;
    
    
    return 0;
}