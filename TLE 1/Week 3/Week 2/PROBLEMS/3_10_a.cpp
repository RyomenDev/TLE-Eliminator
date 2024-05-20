// https://atcoder.jp/contests/abc258/tasks/abc258_a

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    // Your logic goes here
    int hrs = 21, min = 00;
    int k;
    cin >> k;
    min = min + k;
    if (min >= 60)
    {
        hrs = hrs + min / 60;
        min = min % 60;
    }
    string s1 = to_string(hrs), s2 = to_string(min);

    if (min < 10)
        s2 = "0" + to_string(min);

    cout << s1 << ":" << s2 << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt = 1;
    // cin>>tt;
    while (tt--)
        Vatsh();

    return 0;
}