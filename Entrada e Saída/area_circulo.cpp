#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    const double PI= 3.14159;
    double r;
    double AREA;
    
    cin >> r;
    AREA = PI * r* r;
    
    cout << fixed << setprecision(3);
    cout << "AREA = " << AREA << endl;
    
    
    
    
    return 0;
}