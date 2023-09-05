#include <iostream>

using namespace std;

int main()
{
 int a,b,c,d,mult;
 int n1,n2,n3,n4;
    cin>>a>>b>>c>>d;
    n1=a%100;
    n2=b%100;
    n3=c%100;
    n4=d%100;
    mult=n1*n2*n3*n4;

    if(mult % 100 <10){
            cout<<"0"<<mult%100;
    }else{
        cout<<mult%100;
    }


    return 0;
}
