#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double area;
    double r;
    cin>>r;
    double bi=3.141592653;
    area=bi * r*r;
    cout<<fixed<<setprecision(9)<<area;
    return 0;
}
