#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    double n1;
    double n2;
    double x = 0;
    double y = 0;
    double limInferior = 1000 ; // limite inferior
    double limSuperior = -1; // limite superior
    
    cin >> n1 >> n2;
    
    cout << fixed << setprecision(1);
    
   for (double i = n1; i < n2; i = i+0.1)
   {
      double teta = cos(i)*sin(i);
      
      if (teta > 0 &&  x == 0)
        x = i;
     
     else if( x != 0 && teta > 0)
        y = i;
    
   }
   
   cout << x << " a " << y << endl;
    
    
    return 0;
}