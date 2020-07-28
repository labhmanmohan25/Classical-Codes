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
const int INF = 1e9 + 5;

void print_vector2(vector<vector<ll> >v){
    for(ll i=0;i<v.size();i++){
        for(ll j=0;j< v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
}

void print_vector1(vector<ll> v){
    for(ll i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
}

ll gcd(ll a, ll b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,minimum=0,maximum=0;
        cin>>n;
        int a[n];
        for( int i=0;i<n;i++)
        {
            cin>>a[i];
        }

            int l = n;
            vector<int> v;
            int i = 0,ct=1;
            while (i < l)
            {
                if(abs(a[i] - a[i + 1]) <=2)
                {
                    ct++;
                }
                else
                {
                    v.push_back(ct);
                    ct=1;
                }
                        i++;
            }
            minimum=*min_element(v.begin(),v.end());
            maximum=*max_element(v.begin(),v.end());
        cout<<minimum<<" "<<maximum;

        cout<<"\n";
    }
    return 0;
}
