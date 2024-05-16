// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    string str;
    getline(cin, str);
    stringstream s(str);

    int num1, num2;
    char op;
    s >> num1 >> op >> num2;

    bool result;
    if (op == '>')
        result = num1 > num2;
    else if (op == '<')
        result = num1 < num2;
    else if (op == '=')
        result = num1 == num2;

    if (result)
        cout << "Right" << endl;
    else
        cout << "Wrong" << endl;
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
