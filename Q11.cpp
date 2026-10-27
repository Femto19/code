#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long s = 0;
    long long gt = 1;
    for (long long i = 1; i <= n; i++) {
        gt *= i;
        s += gt;
    }
    cout << s;
    return 0;
}