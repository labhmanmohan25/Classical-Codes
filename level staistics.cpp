#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;
using ll = long long;
int main()
{   ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,cnt=0;
        cin>>n;
        vector<int> p;
        vector<int> c;
        ll a[2*n];
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<2*n-1;i+=2)
        {
            p.push_back(a[i]);
            c.push_back(a[i+1]);
        }
        for(i=0;i<p.size();i++)
        {
            if(p[i]>p[i+1] || c[i]>c[i+1] || p[i]<c[i] || (p[i]==p[i+1] && c[i] != c[i+1]))
            cnt++;
        }
        if(cnt>0)
        {
            cout<<"NO"<<"\n";
        }
        else
            cout<<"YES"<<"\n";

    }
    return 0;
}
