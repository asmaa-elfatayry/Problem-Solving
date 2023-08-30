#include <iostream>

using namespace std;

int main()
{
    string a,l,r;
    int leftInt,rightInt;
    cin>>a;

    for (int i=0;i<a.length();i++){
        if(a[i]=='+' || a[i]=='-' ||a[i]=='*'||a[i]=='/'){
        char op=i;
        l=a.substr(0, op);
        r=a.substr(op+1,a.size());
      leftInt = stoi(l);
     rightInt = stoi(r);
        if(a[op]=='+'){
        cout<<leftInt+rightInt<<endl;
        }else if(a[op]=='-'){
        cout<<leftInt-rightInt<<endl;
        }else if(a[op]=='*'){
         cout<<leftInt*rightInt<<endl;
        }else{
         cout<<leftInt/rightInt<<endl;
        }



        }
    }

    return 0;
}
