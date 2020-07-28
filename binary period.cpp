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


void print_vector2(vector<vector<ll> >v){
    for(ll i=0;i<v.size();i++){
        for(ll j=0;j< v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
}

void print_vector1(vector<char> v){
    for(ll i=0; i<v.size();i++){
        cout<<v[i];
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
    ll t;
    cin>>t;
    while (t--)
    {
        ll count_0=0,count_1=0,s;
        string str;
        vector<char> ans;
        cin>>str;
        s=str.size();
        if(s>2)
        {
           for(ll i=0;i<s;i++)
            {
                if(str[i]=='0')
                    count_0++;
                else
                    count_1++;
            }

            if(count_0==s || count_1==s )
            {
                cout<<str<<"\n";
            }
            else
            {
                ans.push_back(str[0]);
                for(ll i=1;i<s;i++)
                {
                    if(str[i]==str[i-1] && str[i]=='0')
                    {
                        ans.push_back('1');
                        ans.push_back(str[i]);
                    }
                    else
                    if(str[i]==str[i-1] && str[i]=='1')
                    {
                        ans.push_back('0');
                        ans.push_back(str[i]);
                    }
                    else
                    {
                        ans.push_back(str[i]);
                    }

                }

                print_vector1(ans);
            }
        }
        else
        {
                 cout<<str<<"\n";
        }

    }
    return 0;
}
