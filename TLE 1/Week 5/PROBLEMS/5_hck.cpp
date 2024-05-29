// https://www.hackerrank.com/challenges/sherlock-and-divisors/problem
// Sherlock and Divisors

#include <bits/stdc++.h>
using namespace std;
#define int long long

int countEvenDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            // Check the divisor i
            if (i % 2 == 0) {
                count++;
            }
            // Check the paired divisor n / i
            if (i != n / i && (n / i) % 2 == 0) {
                count++;
            }
        }
    }
    return count;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    vector<int> results(T);
    for (int i = 0; i < T; ++i) {
        int n;
        cin >> n;
        results[i] = countEvenDivisors(n);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
