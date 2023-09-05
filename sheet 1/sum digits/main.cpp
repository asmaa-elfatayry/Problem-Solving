#include <iostream>

using namespace std;

int main(){
int n,s;
cin>>n;
while(n>0){

//get last digit
 s+=n%10;
 //remove last digit
n= n/10;

}
cout<<s;
}

