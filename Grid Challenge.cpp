#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
string isPossible(vector<string> &rows) 
    {
        int n = rows.size();
        for(int i=0; i < n; i++) 
        {
            sort(rows[i].begin(), rows[i].end());
        }
        for(int j=0; j < n; j++) 
        {
            for(int i=0; i < n - 1; i++) 
        {
                if(rows[i][j] > rows[i+1][j]) 
                return "NO";
        }
    }
    return "YES";
}
 
int main() 
{
    int t,n;
    cin >> t;
    while(t--) 
    {
        cin >> n;
        vector<string> rows(n);
        for(int i=0; i < n; i++) 
        {
            cin >> rows[i];
        }
        cout << isPossible(rows) << endl;
    }
    return 0;
}
