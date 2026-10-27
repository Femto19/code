#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long n;
    cin >> n;
    double s = 0;
    long long tong = 0;
    for (long long i = 1; i <= n; i++) {
        tong += i;
        s += 1.0 / tong;
    }
    cout << fixed << setprecision(3) << s;
    return 0;
}