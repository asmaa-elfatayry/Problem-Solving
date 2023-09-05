#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double a,b,c,d;
double r1,r2;
 cin>>a>>b>>c>>d;
 //r1=pow(a,b);
 //overflow
 //r2=pow(c,d);
 r1=b * log(a);
 r2=d * log(c);
 if(r1>r2){
    cout<<"YES";
 }else{
 cout<<"NO";
 }
    return 0;
}
