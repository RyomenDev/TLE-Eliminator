// Given a number N. Print the summation of the numbers that is between 1 and N (inclusive).
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;

    cout << n * (n + 1) / 2 << endl;
    return 0;
}