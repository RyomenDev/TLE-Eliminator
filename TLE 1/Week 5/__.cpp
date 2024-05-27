/*

pow(a,b) // never use - O(b)
    gives floating value
    so precision errors

*/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007 // 1e9

// Modular Exponentiation
int power(int a, int b)
{
    int result = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return result;
}

// Modular exponentiation O(logN)
int POWER(int a, int b)
{
    if (b == 0)
        return 1;
    a %= MOD;
    int half_power = POWER(a, b / 2); // POWER(a,b/2) will always be < MOD
    if (!(b & 1))                     // if even
        return half_power * half_power % MOD;
    else // if odd
        return half_power * half_power % MOD * a % MOD;
}

// Recursive: Euclidean Algorithm
int GCD(int a, int b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a); //(b,a%b)
}

// iterative: Euclidean Algorithm
int gcd(int a, int b)
{
    while (a)
    {
        int t = a;
        a = b % a;
        b = t;
    }
    return b;
}

// LCM
int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

// Modular Inverse using Fermat's Little Theorem
int MODINVERSE(int a)
{
    return POWER(a, MOD - 2);
}

// Modular Multiplicative Inverse (alias for modInverse)
int MMI(int a)
{
    return POWER(a, MOD - 2);
}

int32_t main()
{
    int a, b;
    // cout<<(4&1)<<" "<<(5&1)<<endl;
    cin >> a >> b;
    cout << POWER(a, b) << endl;
    return 0;
}
