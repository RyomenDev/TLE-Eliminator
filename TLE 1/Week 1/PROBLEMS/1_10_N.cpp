// Task 10: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    // Your logic goes here
    char a;
    cin >> a;
    // a = 97 A = 65 (32)
    if (a >= 'a' && a <= 'z')
        cout << (char)(a - 32);
    else
        cout << (char)(a + 32);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt = 1;
    // cin>>tt;
    while (tt--)
        Vatsh();

    return 0;
}