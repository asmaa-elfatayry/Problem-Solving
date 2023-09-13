#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x,p,disc;

    cin>>x>>p;
    disc=p/(1- (x/100));
cout<<fixed<<setprecision(2)<<disc<<endl;
    return 0;
}
