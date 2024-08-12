#include <iostream>
#include <math.h>
using namespace std;

float calc_delta(float a, float b, float c)
{
    float delta;
    delta = pow(b,2) - 4*a*c;
    
    return delta;
}

int main()
{
    float d;
    int x, y, z;
    cin >> x >> y >> z;
    
    d = calc_delta(x, y, z);
    
    cout << "delta = " << d;
    
    
    
    return 0;
}