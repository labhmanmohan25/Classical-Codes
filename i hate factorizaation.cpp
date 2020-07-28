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

ll ispower(ll temp){
    temp = abs(temp);
    ll i = sqrt(sqrt(temp));
    while(i*i*i*i*i > temp){
        if(i*i*i*i*i == temp){
            return i;
        }
        i--;
    }
    return 0;
}

double nthRoot(ll A, ll N)
{
    // intially guessing a random number between
    // 0 and 9
    double xPre = rand() % 10;

    //  smaller eps, denotes more accuracy
    double eps = 1e-3;

    // initializing difference between two
    // roots by INT_MAX
    double delX = INT_MAX;

    //  xK denotes current value of x
    double xK;

    //  loop untill we reach desired accuracy
    while (delX > eps)
    {
        //  calculating current value from previous
        // value by newton's method
        xK = ((N - 1.0) * xPre +
              (double)A/pow(xPre, N-1)) / (double)N;
        delX = abs(xK - xPre);
        xPre = xK;
    }

    return xK;
}

ll floorRoot5(ll n)
{
    // Base cases
    if (n == 0 || n == 1)
       return n;

    // Do Binary Search for floor of 5th square root
    ll low = 1, high = n, ans = 0;
    while (low <= high)
    {
        // Find the middle point and its power 5
        ll mid = (low + high) / 2;
        ll mid5 = mid*mid*mid*mid*mid;

        // If mid is the required root
        if (mid5 == n)
            return mid;

        // Since we need floor, we update answer when
        // mid5 is smaller than n, and move closer to
        // 5'th root
        if (mid5 < n)
        {
            low = mid + 1;
            ans = mid;
        }
        else // If mid^5 is greater than n
            high = mid - 1;
    }
    return ans;
}

int main(){
    ll x;
    cin>>x;
    for(ll i = 1; i*i*i*i*i <= x; i++){
        ll temp, temp1;
        temp1 = x - i*i*i*i*i;
        cout<<"/";
        if(floorRoot5(temp)*floorRoot5(temp)*floorRoot5(temp)*floorRoot5(temp)*floorRoot5(temp) == temp){
            cout<<i<<" "<<floorRoot5(temp);
        }
    }

    return 0;
}
