#include <iostream>

using namespace std;

int main()
{
    double n;
    cin>>n;

    int intNo=(int)n;
    if(intNo == n){
        cout<<"int "<<intNo<<endl;
    }else{
    cout<<"float "<<intNo<<" "<<n-intNo<<endl;
    }

    return 0;
}
