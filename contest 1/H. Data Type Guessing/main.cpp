#include <iostream>

using namespace std;

int main() {
   double n, k, a;
    cin >> n >> k >> a;

   double result =(n*k) / a;
long long myno=result;
double myres=result-myno;
    if (myres >0) {
              cout << "double" << endl;

    } else if (myno <= 2147483647) {
           cout << "int" << endl;

    } else {
        cout << "long long" << endl;
    }

    return 0;
}
