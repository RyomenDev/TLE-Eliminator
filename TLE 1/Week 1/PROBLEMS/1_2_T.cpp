// Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int A = min(a, min(b, c));
    int C = max(a, max(b, c));
    int B = a + b + c - A - C;

    cout << A << "\n"
         << B << "\n"
         << C << "\n";
    cout << a << "\n"
         << b << "\n"
         << c << "\n";
    return 0;
}