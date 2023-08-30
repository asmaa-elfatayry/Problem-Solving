#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maxNo=max(a,b);
    int minNo=min(a,b);
    cout<<min(minNo,c)<<" " << max(maxNo,c) << endl;
    return 0;
}
