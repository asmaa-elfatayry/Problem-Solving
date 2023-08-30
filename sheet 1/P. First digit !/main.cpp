#include <iostream>

using namespace std;

int main()
{
  string s;
  cin>>s;
  int ch=s[0]-'0';

  if(ch%2==0){
    cout<<"EVEN"<<endl;
  }else{
   cout<<"ODD"<<endl;
  }
    return 0;
}
