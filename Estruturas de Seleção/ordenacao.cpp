#include <iostream>
using namespace std;


int main ()

{
    int a, b, c;
    
    cin >> a >> b >> c;
    
    if (a < b && a < c && b < c)
    {
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << "\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    }
    
    else if (a < b && a < c && c < b)
    {
    cout << a << endl;
    cout << c << endl;
    cout << b << endl;
    cout << "\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    }
    
    else if (b < a && b < c && a < c)
    {
    cout << b << endl;
    cout << a << endl;
    cout << c << endl;
    cout << "\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    }
    
    else if (b < a && b < c && c < a)
    {
    cout << b << endl;
    cout << c << endl;
    cout << a << endl;
    cout << "\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    }
    
    else if (c < a && c < b && a < b)
    {
    cout << c << endl;
    cout << a << endl;
    cout << b << endl;
    cout << "\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    }
     
    else if (c < a && c < b && b < a)
    {
    cout << c << endl;
    cout << b << endl;
    cout << a << endl;
    cout << "\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    } 
    
    else if ( a == b && b == c && c == a)
    {
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << "\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
        
    }
    return 0;