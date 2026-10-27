#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long t = 1;
    for (long long i = 1; i <= n; i++) {
        t *= i;
    }
    cout << t;
    return 0;
}