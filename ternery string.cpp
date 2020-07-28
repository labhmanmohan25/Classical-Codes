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
#define pb push_back
#define eb emplace_back
#define vll vector<long long int>
#define loop(i, a, b) for(long long int i = a; i < b; i++)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define PI 3.14159265
#define pii pair<ll, ll>
#define vpair vector<pii>
#define vbool vector<bool>
#define mkp make_pair
#define scan(a,n) for(int i =0 ; i<n ; i++) cin>>a[i]
#define print(a,n) for(int i = 0 ; i < n ; i++) {cout<<a[i]<<' ';}cout<<'\n'
#define s second
#define f first
#define br '\n'
#define permute next_permutation
#define pqua priority_queue<ll>
#define pqud priority_queue<ll, vector<ll>, greater<ll> >
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define maxi *max_element

vector<long long int> sieve(long long int n){
 	vector<long long int> primes;
 	bool isPrime[n+1] = {false};
 	isPrime[1] = isPrime[0] = false;
 	for(long long int i = 2;i<=n;i++)
 	{
 		isPrime[i] = true;
 	}
 	for(long long int i = 2;i*i<=n;i++)
 	{
 		if(isPrime[i])
 		{
 			for(long long int j = i*i;j<=n;j+=i)
 			{
 				isPrime[j] = false;
 			}
 		}
 	}
 	for(long long int i = 2;i<=n;i++)
 	{
 		if(isPrime[i])
 		{
 			primes.push_back(i);
 		}
 	}
 	return primes;
}

void print_vector2(vector<vector<ll> >v) {
    for(ll i=0;i<v.size();i++){
        for(ll j=0;j< v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<"\n";
    }
}

void print_vector1(vector<ll> v) {
    for(ll i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<"\n";
}

ll gcd(ll a, ll b) {
    return __gcd(a, b);
}

// v.back()
// v.erase(v.begin(), v.brgin + k)
// v.insert(at which place v.bigin() + 1 implines at i = 1, no. of times, value)
// v.insert(position, copy.begin(), copy.end())
// v1.swap(v2)
// v.clear() to clear v.empty() to check empty
// map assending order and set descending order

ll f(string s)
{
    ll k = 3;
    int n = s.length();
    int st = 0;
    int end = 0;
    int cnt[3];
    memset(cnt, 0, sizeof(cnt));
    int distEle = 0;
    int currlen;
    int minlen = n;
    int startInd = -1;
    while (end < n) {
        cnt[s[end] - '1']++;
        if (cnt[s[end] - '1'] == 1)
            distEle++;
        if (distEle > k) {
            while (st < end && distEle > k) {
                if (cnt[s[st] - '1'] == 1)
                    distEle--;
                cnt[s[st] - '1']--;
                st++;
            }
        }
        if (distEle == k) {
            while (st < end && cnt[s[st] - '1'] > 1) {
                cnt[s[st] - '1']--;
                st++;
            }
            currlen = end - st + 1;
            if (currlen < minlen) {
                minlen = currlen;
                startInd = st;
            }
        }

        end++;
    }
    return minlen;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll c1=0,c2=0,c3=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i] == '1')
                c1++;
            else if(s[i] == '2')
                c2++;
            else
                c3++;
        }
        if(c1==0 || c2==0 || c3==0){
            cout<<"0"<<br;
        }
        else
            cout << f(s)<<br;
    }
    return 0;
}
