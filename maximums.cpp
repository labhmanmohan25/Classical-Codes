#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,c,d;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ce=0,co=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
                {
                    ce++;
                    b=i;
                }
            else
            {
                co++;
                c=i;

            }
        }
        if(ce>0)
        {
          cout<<"1"<<"\n";
          cout<<b<<"\n";
        }
        else if(co>1)
        {
            cout<<"2"<<"\n";
            cout<<c<<" "<<d<<"\n";

        }
        else cout<<"-1"<<"\n";

    }
    return 0;
}
