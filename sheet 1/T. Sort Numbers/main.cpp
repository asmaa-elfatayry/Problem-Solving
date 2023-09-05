
#include <iostream>

using namespace std;

int main()
{
    double a, b, c, mi, ma, mid;
    cin >> a >> b >> c;

    if (a <= b && a <= c) {
        mi = a;
        if (b <= c) {
            mid = b;
            ma = c;
        } else {
            mid = c;
            ma = b;
        }
    } else if (b <= a && b <= c) {
        mi = b;
        if (a <= c) {
            mid = a;
            ma = c;
        } else {
            mid = c;
            ma = a;
        }
    } else {
        mi = c;
        if (a <= b) {
            mid = a;
            ma = b;
        } else {
            mid = b;
            ma = a;
        }
    }

    cout << mi << endl << mid << endl << ma << endl;
    cout << endl;
    cout << a << endl << b << endl << c << endl;

    return 0;
}
