// https://codeforces.com/problemset/problem/1499/B
// B. Binary Removals

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    string s;
    cin >> s;

    size_t i = s.find("11");
    size_t j = s.rfind("00");
    // cout << i << " " << j << " ";
    cout << (i != -1 && j != -1 && i < j ? "NO" : "YES") << endl;
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

// void Vatsh()
// {
//     // Your logic goes here
//     string s;
//     cin >> s;
//     int n = s.length();
//     int cnt0 = 0, cnt1 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == '0')
//             cnt0++;
//         else
//             cnt1++;
//     }
//     if (cnt0 == 0 || cnt1 == 0)
//     {
//         cout << "YES" << endl;
//         return;
//     }
//     if (s[0] == s[1] && s[0] == '1' && n > 3)
//     {
//         cout << "NO" << endl;
//         return;
//     }

//     string temp = s;
//     reverse(temp.begin(), temp.end());
//     int i = 0;
//     char C;

//     C = temp[i] == '1' ? '1' : '0';
//     while (temp[i] == C)
//     {
//         i++;
//     }
//     for (i; i < n - 2; i++)
//     {
//         if (temp[i] == '0' && temp[i + 1] == '0' && temp[i + 2] == '0')
//         {
//             cout << "NO" << endl;
//             return;
//         }
//         if (temp[i] == '1' && temp[i + 1] == '1' && temp[i + 2] == '1')
//         {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
// }