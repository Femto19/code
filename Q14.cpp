#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x;
    long long n;
    cin >> x >> n;
    double s = 0;
    for (long long i = 0; i <= n; i++) {
        s += pow(x, 2 * i + 1);
    }
    cout << fixed << setprecision(3) << s;
    return 0;
}