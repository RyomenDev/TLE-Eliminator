// Given two numbers A and B.Print "Multiples" if A is multiple of B or vice versa.Otherwise print "No Multiples".

//  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0)
        cout << "Multiples";
    else
        cout << "No Multiples";
    return 0;
}