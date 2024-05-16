// Given two numbers N and M. Print the summation of their last digits.

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    int sum = (n % 10) + (m % 10);
    cout << sum << endl;
    return 0;
}