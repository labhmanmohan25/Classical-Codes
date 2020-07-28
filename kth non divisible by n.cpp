#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,temp;
        cin>>n>>k;
        temp = k / (n-1);
        if(k%(n-1) == 0)
            cout<<(temp*n) + (k - (temp * (n-1))) - 1<<"\n";
        else
            cout<<(temp*n) + (k - (temp * (n-1)))<<"\n";
	}
    return 0;
}
