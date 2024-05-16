// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    // Your logic goes here
    string f1, s1, f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;
    if (s1 == s2)
        cout << "ARE Brothers" << endl;
    else
        cout << "NOT" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}