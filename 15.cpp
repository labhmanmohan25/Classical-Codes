#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int countXOR(int n)
{
	int count0 = 0, count1 = 0;
	while (n)
	{
		(n % 2 == 0) ? count0++ :count1++;
		n /= 2;
	}
    count1=count1%2;
	return count1;

}

int main()
{
    int t,o;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n],d[n],b[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            d[i]=a[i];
        }
        while(q--)
        {
            int p;
            o=0;
            cin>>p;
            for (int j=0;j<n;j++)
            {
                b[j]=p^d[j];
                o=o+countXOR(b[j]);
            }
            cout<<n-o<<" "<<o<<endl;
        }
    }

    return 0;
}
