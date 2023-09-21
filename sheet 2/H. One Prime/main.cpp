#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n;
   cin>>n;


    if (n <= 1) {
        cout << "NO" << endl;
    } else {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
