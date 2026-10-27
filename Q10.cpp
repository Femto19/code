#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x;
    long long n;
    cin >> x >> n;
    cout << fixed << setprecision(3) << pow(x, n);
    return 0;
}