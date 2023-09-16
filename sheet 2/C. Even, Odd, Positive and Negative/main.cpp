#include <iostream>

using namespace std;

int main()
{
  int n,no,neg=0,pos=0,even=0,odd=0;
  cin>>n;
  while(n--){
    cin>>no;
    if(no==0 || no%2==0){
       even++;
    } if(no%2 != 0){
    odd++;
    }if(no<0){
    neg++;
    }if(no>0){
    pos++;
    }
  }

  cout<<"Even: "<<even<<endl;
  cout<<"Odd: "<<odd<<endl;
  cout<<"Positive: "<<pos<<endl;
  cout<<"Negative: "<<neg<<endl;
    return 0;
}
