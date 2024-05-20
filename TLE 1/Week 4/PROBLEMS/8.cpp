// https://cses.fi/problemset/task/1755
// Palindrome Reorder

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

// string solve(string s)
// {
//     unordered_map<char, int> mp;
//     for (auto c : s)
//         mp[c]++;
//     int count = 0;
//     for (auto i : mp)
//     {
//         if (i.second % 2 != 0)
//             count++;
//         if (count > 1)
//             return "NO SOLUTION";
//     }
//     string ans = "";
//     for (auto i : mp)
//     {
//         while (i.second--)
//         {
//             if (i.second % 2 != 0)
//                 ans += i.first;
//             else
//                 ans = i.first + ans;
//         }
//     }
//     return ans;
// }

string solve(string s)
{
    unordered_map<char, int> mp;
    for (auto c : s)
        mp[c]++;

    int oddCount = 0;
    char oddChar = '\0';
    for (auto &p : mp)
    {
        if (p.second % 2 != 0)
        {
            oddCount++;
            oddChar = p.first;
        }
    }

    if (oddCount > 1)
        return "NO SOLUTION";

    string firstHalf = "", secondHalf = "";
    for (auto &p : mp)
    {
        string temp(p.second / 2, p.first);
        firstHalf += temp;
        secondHalf = temp + secondHalf;
    }

    if (oddCount == 1)
    {
        return firstHalf + oddChar + secondHalf;
    }
    else
    {
        return firstHalf + secondHalf;
    }
}

void Vatsh()
{
    // Your logic goes here
    string s;
    cin >> s;
    cout << solve(s) << endl;
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