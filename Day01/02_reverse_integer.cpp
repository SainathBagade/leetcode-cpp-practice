// LeetCode 7: Reverse Integer
// Reverse digits of a 32-bit signed integer; return 0 on overflow.
#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    long long res = 0;
    while (x != 0) {
        res = res * 10 + x % 10;
        x /= 10;
    }
    if (res < INT_MIN || res > INT_MAX) return 0;
    return (int)res;
}

int main() {
    cout << reverse(123) << endl;  // 321
    cout << reverse(-123) << endl; // -321
}
