#include <bits/stdc++.h>
#include <vector>
#include <string>
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
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n<k)
        {
            cout<<"NO";
        }
        else if(n==k)
        {
            cout<<"YES\n";
            for(ll i=0;i<n;i++)
                cout<<"1 ";
        }
        else
        {
            if(n%2)
            {
                if(k%2==0)
                    cout<<"NO";
                else
                {
                    cout<<"YES\n";
                    for(ll i=0;i<k-1;i++)
                    cout<<"1 ";
                    cout<<n-k+1;
                }
            }
            else
            {
                if(k%2)
                {
                    if(n>2*(k-1))
                    {
                        cout<<"YES\n";
                        for(ll i=0;i<k-1;i++)
                            cout<<"2 ";
                        cout<<n-2*(k-1);
                    }
                    else
                        cout<<"NO";
                }
                else
                {
                    cout<<"YES\n";
                    for(ll i=0;i<k-1;i++)
                        cout<<"1 ";
                    cout<<n-k+1;
                }
            }
        }
            cout<<"\n";
        }
    return 0;
}
