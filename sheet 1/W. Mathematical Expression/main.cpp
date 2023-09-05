#include <iostream>

using namespace std;

int main()
{
   int a,b,res;
   char op,assi;
   cin>>a>>op>>b>>assi>>res;
   if(op == '+'){
    if((a+b) ==res){
        cout<<"Yes"<<endl;
    }else{
    cout<<a+b<<endl;
    }
   }else if(op == '-'){
    if((a-b) ==res){
        cout<<"Yes"<<endl;
    }else{
    cout<<a - b<<endl;
    }
   }else{
    if((a * b) ==res){
        cout<<"Yes"<<endl;
    }else{
    cout<<a * b<<endl;
    }
   }
    return 0;
}
