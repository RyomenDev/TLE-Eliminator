// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    // Your logic goes here
    string s;
    cin >> s;
    if (s.length() >= 10)
    {
        // cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        // return;
        string temp;
        temp += s[0];
        temp += (to_string((s.size() - 2)));
        temp += s[s.size() - 1];
        cout << temp << endl;
        return;
    }
    cout << s << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt = 1;
    cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}