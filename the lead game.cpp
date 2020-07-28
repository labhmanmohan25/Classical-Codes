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
#define mod  998244353

int main(){

    int t;
    cin >> t;
    int a = 0, b = 0, cnt1= 0, cnt2 = 0;
    while(t--)
    {
        int p1, p2;
        cin >> p1 >> p2;
        cnt1 += p1;
        cnt2 += p2;
        if(cnt1 > cnt2)
        a = max(a, cnt1 - cnt2);
        else
        b = max(b, cnt2 - cnt1);
    }

    if(a > b)
        cout << 1 << " " << a;
    else
        cout << 2 << " " << b;

    return 0;
}
