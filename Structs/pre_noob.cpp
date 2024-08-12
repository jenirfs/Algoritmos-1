#include <iostream>
#include <iomanip>
using namespace std;

struct dado
{
    double matricula;
    double p1;
    double p2;
};



int main()
{
     dado aluno;
     cin >> aluno.matricula;
     cin >> aluno.p1;
     cin >> aluno.p2;
     
     cout << "Matricula do aluno: " << aluno.matricula << endl;
     cout << fixed << setprecision(2);
     cout << "Nota da primeira prova: " << aluno.p1 << endl;
     cout << "Nota da segunda prova: " << aluno.p2 << endl;
     
    
    return 0;
}