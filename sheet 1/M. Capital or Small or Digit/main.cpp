#include <iostream>

using namespace std;

int main()
{
   char c;
   cin>>c;
   if(c>='A'&&c<='Z'){
    cout<<"ALPHA"<<endl;
    cout<<"IS CAPITAL"<<endl;
   }else if(c>='a'&&c<='z'){
      cout<<"ALPHA"<<endl;
    cout<<"IS SMALL"<<endl;
   }else{
   cout<<"IS DIGIT"<<endl;
   }

    return 0;
}
