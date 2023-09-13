#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
   if (n > 0) {
        int digit = n % 10;
        n /= 10;
        if(digit % n ==0 || n % digit ==0){
            cout<<"YES"<<endl;
        }else{
         cout<<"NO"<<endl;
        }

    }
    return 0;
}
