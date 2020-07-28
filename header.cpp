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

ll binarySearch(ll arr[], ll key)
{
    ll high = sizeof(arr) / sizeof(arr[0]);
    ll low = 0;
    if (high < low)
        return -1;
    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;
    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);
    return binarySearch(arr, low, (mid - 1), key);
}
