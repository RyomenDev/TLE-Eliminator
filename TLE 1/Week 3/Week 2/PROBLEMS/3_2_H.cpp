

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007 // 1e9

bool isPrime(ll n)
{
     if (n <= 1)
          return false;
     if (n <= 3)
          return true;
     if (n % 2 == 0 || n % 3 == 0)
          return false;
     for (ll i = 5; i * i <= n; i = i + 6)
          if (n % i == 0 || n % (i + 2) == 0)
               return false;
     return true;
}
void Vatsh()
{
     // Your logic goes here
     ll num;
     cin>>num;
     if(isPrime(num))
     {
          cout<<"YES"<<endl;
     }
     else
     {
          cout<<"NO"<<endl;
     }
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