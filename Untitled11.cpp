#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {   
        count=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]-a[0];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)               //odd
            cout<<"NO";
            count++;
            break;
        }
        if(count==0)
        cout<<"YES";
    }
    return 0;
}
