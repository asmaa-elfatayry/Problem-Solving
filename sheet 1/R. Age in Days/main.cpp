#include <iostream>

using namespace std;

int main()
{
  int n,year,month,days;
  cin>>n;
  if(n>=365){
      year=n/365;
  n=n-(year*365);

  }else{
  year=0;
  }

  if(n>=30){
    month=n/30;
     n=n-(month*30);
     days=n;
  }else{
      month=0;
    days=n;
  }
  cout<<year<<" years"<<endl;
  cout<<month<<" months"<<endl;
  cout<<days<<" days"<<endl;

    return 0;
}
