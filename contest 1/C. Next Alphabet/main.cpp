#include <iostream>

using namespace std;

int main()
{
    char c;
    cin>>c;
    int cha=(int)c;;
    if(cha == 122){
        cout<<char(97);
    }else{
      cout<<char(cha+1);
    }


    return 0;
}
