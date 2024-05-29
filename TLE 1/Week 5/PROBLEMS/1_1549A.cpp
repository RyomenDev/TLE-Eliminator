// https://codeforces.com/contest/1549/problem/A
// A. Gregor and Cryptography

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"

void Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    if(n==5){
        cout<<2<<" "<<4<<endl;
        return;
    }
    if (n % 2 != 2)
    {
        cout << 2 << " " << n / 2 << endl;
        return;
    }
}

int32_t main()
{

    int tt = 1;
    cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}