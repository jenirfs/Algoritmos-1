#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int L, C, R1, R2, H;
    
    cin >> L >> C >> R1 >> R2;
    
    L >= 1 && L <= 100;
    C >= 1 && C <= 100;
    R1 >= 1 && R1 <= 100;
    R2 >= 1 && R2 <= 100;
    H = sqrt ( (L * L) + (C * C) );
    
    
    if (L >= (2 * R1) + (2* R2) || C >= (2 * R1) + (2 * R2) || H > (2 * R1) + (2 * R2))
   {
       cout << "S" << endl;
   }
   
   else if (L <= (2 * R1) + (2* R2) || C <= (2 * R1) + (2 * R2) || H < (2 * R1) + (2 * R2))
    {
        cout << "N" << endl;
    }
    
    
    
    
    
    
    
    return 0;
}