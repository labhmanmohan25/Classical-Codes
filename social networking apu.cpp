#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#define mii map <int,int>

using namespace std;
int main()
{
    int n,k,val,i,x,p,len;

    while (scanf ("%d %d",&n,&k) != EOF)
    {
        mii mp;
        stack <int> st;

        for (i=1; i<=n; i++)
        {
            cin>>val;
            if (st.empty())
            {
                mp[val] = 1;
                st.push(val);
            }
            else
            {
                p = st.size()-mp[val]+1;

                if (mp[val] == 0 || (p > 0 && p > k))
                {
                    x = st.top();
                    mp[val] = mp[x]+1;
                    st.push(val);
                }
            }
        }

        if (st.size() > k)
            len = k;
        else
            len = st.size();
        cout<<len<<"\n"<<st.top()<<" ";
        st.pop();
        --len;

        while (!st.empty())
        {
            if (!len)
                break;
            cout<<st.top()<<" ";
            --len;
            st.pop();
        }

        cout<<"\n";
    }

    return 0;
}
