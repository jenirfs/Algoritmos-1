#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nome1;
    string nome2;
    string nome3;
    
    getline (cin >> ws, nome1);
    getline (cin >> ws, nome2);
    getline (cin >> ws, nome3);
    
    if (nome1 < nome2 && nome2 < nome3)
    {
        cout << nome1 << " " << nome2 << " " << nome3 << endl;
    }
    
    else if (nome1 < nome3 && nome3 < nome2)
    {
        cout << nome1 << " " << nome3 << " " << nome2 << endl;
    }
    
    else if (nome2 < nome1 && nome1 < nome3)
    {
       cout << nome2 << " " << nome1 << " " << nome3 << endl; 
    }
    
    else if (nome2 < nome3 && nome3 < nome1)
    {
        cout << nome2 << " " << nome3 << " " << nome1 << endl;
    }
    
    else if (nome3 < nome1 && nome1 < nome2)
    {
        cout << nome3 << " " << nome1 << " " << nome2 << endl;
    }
    
    else if (nome3 < nome2 && nome2 < nome1)
    {
        cout << nome3<< " " << nome2 << " " << nome1 << endl;
    }
    
    return 0;
}