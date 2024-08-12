#include <iostream>
#include <string>
using namespace std;

int main()
{
    string animal1;
    string animal2;
    string animal3;
    
    getline (cin >> ws, animal1);
    getline (cin >> ws, animal2);
    getline (cin >> ws, animal3);
    
    if (animal1 == "vertebrado" && animal2 == "ave" && animal3 == "carnivoro")
    {
        cout << "aguia" << endl;
    }
    
    else if (animal1 == "vertebrado" && animal2 == "ave" && animal3 == "onivoro")
    {
        cout << "pomba" << endl;
    }
    
    else if (animal1 == "vertebrado" && animal2 == "mamifero" && animal3 == "onivoro")
    {
        cout << "homem" << endl;
    }
    
    else if (animal1 == "vertebrado" && animal2 == "mamifero" && animal3 == "herbivoro")
    {
        cout << "vaca" << endl;
    }
    
    else if (animal1 == "invertebrado" && animal2 == "inseto" && animal3 == "hematofago")
    {
        cout << "pulga" << endl;
    }
    
    else if (animal1 == "invertebrado" && animal2 == "inseto" && animal3 == "herbivoro")
    {
        cout << "lagarta" << endl;
    }
    
    else if (animal1 == "invertebrado" && animal2 == "anelideo" && animal3 == "hematofago")
    {
        cout << "sanguessuga" << endl;
    }
    
    else if (animal1 == "invertebrado" && animal2 == "anelideo" && animal3 == "onivoro")
    {
        cout << "minhoca" << endl;
    }
    return 0;
}