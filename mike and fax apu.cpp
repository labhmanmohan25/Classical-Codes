/*	
    TELL YOUR CODE TO START BELIEVING IN GOD!!
    THEY HATE US BECAUSE THEY AIN'T US
        ARIJIT SUR 
        duke_knight
        IIT ISM 
    WORK SO HARD THAT YOUR IDOL BECOMES YOUR COMPETITOR 
    */
    #include<bits/stdc++.h>
    #define pb push_back
    #define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define max(a,b) (a>b?a:b)
    #define min(a,b) (a<b?a:b)
    #define f q.front()
    #define SIZE (ll)(1e5)
    #define mod (ll)(1e9+7)
    using namespace std;
    typedef long long int ll;
    string s;
    bool isPalindrome(int i, int k)
    {
            int n = i+k-1;
            while(i<=n)
            {
                if(s[i]==s[n])
                {
                    i++;n--;
                }
                else return 0;
            }
            return 1;
    }
    int main()
    {
        int i,k;
        cin>>s>>k;
        int n = s.size();
        if(n%k) {
            printf("NO\n");
            return 0;
        }
        for(i=0;s[i]!='\0';i+=n/k)
        {
            if(!isPalindrome(i,n/k))
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
        return 0;
    }
