#include <iostream>
#include <iomanip>
using namespace std;

struct dado
{
    int matricula;
    double p1;
    double p2;
    double media;
};

int main()
{
    dado aluno;
    
    cin >> aluno.matricula;
    cin >> aluno.p1;
    cin >> aluno.p2;
    
    aluno.media = ((aluno.p1 * 2) + (aluno.p2 * 3))/5;
    
    cout << "Matricula do aluno: " << aluno.matricula << endl;
    cout << fixed << setprecision(2);
    cout << "Nota da primeira prova: "  << aluno.p1 << endl;
    cout << "Nota da segunda prova: " << aluno.p2 << endl;
    cout << "Media: " << aluno.media << endl;
    
    
    
    return 0;
}