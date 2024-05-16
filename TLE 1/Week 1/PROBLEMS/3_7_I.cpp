// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I
// Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Vatsh()
{
    // Your logic goes here
    ll a, b;
    cin >> a >> b;
    if (a >= b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Vatsh();

    return 0;
}