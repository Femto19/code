#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long n;
    cin >> n;
    double s = 0;
    for (long long i = 1; i <= n; i++) {
        s += 1.0 / (i * (i + 1));
    }
    cout << fixed << setprecision(3) << s;
    return 0;
}