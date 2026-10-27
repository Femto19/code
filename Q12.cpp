#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x;
    long long n;
    cin >> x >> n;
    double s = 0;
    for (long long i = 1; i <= n; i++) {
        s += pow(x, i);
    }
    cout << fixed << setprecision(3) << s;
    return 0;
}