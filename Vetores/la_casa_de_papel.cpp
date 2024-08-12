#include <iostream>
using namespace std;


int main()
{
    int num_votos;
    int votos[100];
    int i;
    int like=0;
    int deslike=0;
    
    cin >> num_votos;
    
    for (i = 0; i < num_votos; i++)
    {
       cin >> votos[i];
       
       if (votos[i] == 1)
        like++;
       else if (votos[i] == -1)
        deslike++;
       else
        cin >> votos[i];
       
    }
    
    if (like > deslike)
        cout << "A maioria gostou" << endl;
    else if (like < deslike)    
        cout << "A maioria nao gostou" << endl;
    else if (like == deslike)
        cout << "Deu empate" << endl;
    
    
    return 0;
}