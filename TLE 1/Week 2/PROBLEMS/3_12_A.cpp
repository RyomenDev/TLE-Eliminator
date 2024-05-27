// https://codeforces.com/problemset/problem/1030/A


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007 // 1e9

// void Vatsh()
// {
//     // Your logic goes here
//     string s;
//     getline(cin, s);
//     int i = 0;

//     string temp;
//     while (s[i] != '+' && s[i] != '-' && s[i] != '*')
//         temp.push_back(s[i++]);
//     int num1 = stoi(temp);

//     char op = s[i++];

//     temp.clear();
//     while (s[i] != '=')
//         temp.push_back(s[i++]);
//     int num2 = stoi(temp);

//     i++;
//     temp.clear();
//     while (i < s.size())
//         temp.push_back(s[i++]);
//     int num3 = stoi(temp);

//     if (op == '+')
//     {
//         if (num1 + num2 == num3)
//             cout << "Yes" << endl;
//         else
//             cout << num1 + num2 << endl;
//     }
//     else if (op == '-')
//     {
//         if (num1 - num2 == num3)
//             cout << "Yes" << endl;
//         else
//             cout << num1 - num2 << endl;
//     }
//     else if (op == '*')
//     {
//         if (num1 * num2 == num3)
//             cout << "Yes" << endl;
//         else
//             cout << num1 * num2 << endl;
//     }
// }

void Vatsh()
{
    string str;
    getline(cin, str);
    stringstream s(str);

    int num1, num2, num3;
    char op, eq;
    s >> num1 >> op >> num2 >> eq >> num3;

    int result;
    if (op == '+')
        result = num1 + num2;
    else if (op == '-')
        result = num1 - num2;
    else if (op == '*')
        result = num1 * num2;

    if (result == num3)
    {
        cout << "Yes" << endl;
        return;
    }
    cout << result << endl;
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