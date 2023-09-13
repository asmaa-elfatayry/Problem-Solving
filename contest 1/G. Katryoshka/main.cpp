#include <iostream>
using namespace std;

int main() {
    long long int n, m, k;
    cin >> n >> m >> k;

    // Find the minimum of n, m, and k to ensure all parts can be used
    long long int min_parts = min(min(n, m), k);

    // Calculate the maximum number of Katryoshkas using one eye, one mouth, and one body
    long long int max_katryoshkas = min_parts;

    // Calculate the remaining parts after creating max_katryoshkas
    n -= min_parts;
    m -= min_parts;
    k -= min_parts;

    // Calculate additional Katryoshkas using two eyes and one body if there are enough parts
    max_katryoshkas += min(n / 2, k);

    cout << max_katryoshkas << endl;

    return 0;
}
