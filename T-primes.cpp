#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;
using ll = long long;
#define mod 1000000007

bool isPerfectSquare(long double x)
{
    long double sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}

template <class T>

bool isPrime(T number){
    for(T i(2); i < sqrt(number); ++i)
        if (number % i == 0)
            return false;
    return true;
}
int main()
{
    ll n,i,cnt;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        ll x;
        x=a[i];
        if (isPerfectSquare(x) && isPrime(sqrt(x)))
        {
            cout<<"YES"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }

    return 0;
}
