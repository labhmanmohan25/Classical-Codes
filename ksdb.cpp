#include<bits/stdc++.h>
//One implementation to rule them all?
#define db              double
#define ll              long long int
#define ld                long long double
//#define int           long long int
#define ull             unsigned long long
#define fi              first
#define se              second
#define rep(i,a,n)      for(int i=a;i<n;i++)
#define repr(i,n,b)     for(int i=n;i>=b;i--)
#define endl            '\n'
#define mem(a,b)        memset(a, b, sizeof a)
#define mkp             make_pair
#define pb              push_back
#define max3(a,b,c)     max(a,max(b,c))
#define min3(a,b,c)     min(a,min(b,c))
#define w(t)            int t; cin>>t; while(t--)
#define all(a)          a.begin(), a.end()
#define sz(a)           int((a).size())
#define debug(x)        cerr << #x << " = " << x << endl;
//Bitwise 
#define isOn(S, j)      (S & (1<<j))
#define setBit(S, j)    (S |= (1<<j))
#define clearBit(S, j)  (S &= ~(1<<j))
#define toggleBit(S, j) (S ^= (1<<j))
#define lowBit(S)       (S & (-S))
#define setAll(S, n)    (S = (1<<n)-1)
#define turnOffLastBit(S) ((S) & (S-1))
#define turnOnLastZero(S) ((S) | (S+1))
//Can use tuples in C++17
using namespace std;
typedef vector < int > vii;
typedef vector < ll > vll;
typedef vector < vii > vvi;
typedef pair < int,int > pii;
template <class T> using min_heap = priority_queue<T,vector<T>,greater<T> >;
template <class T> using max_heap = priority_queue<T>;
const db PI = 2*acos(0.0);
const int INF = 0x3f3f3f3f;
const ll LINF = (ll)2e18;
db eps       =          0.000001;
ll mod       =          998244353;   //(1e9+7)
void print(vector <int> &arr){
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;
}
void printll(vector <ll> &arr){
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;
}

ll ncr(ll n, ll r)
{
    r=min(r,n-r);
    ll A[r],i,j,B[r];
    iota(A,A+r,n-r+1);  
    iota(B,B+r,1);     

    ll g;
    for(i=0;i<r;i++)
    for(j=0;j<r;j++)
    {
        if(B[i]==1)
            break;
        g=__gcd(B[i], A[j] );
        A[j]/=g;
        B[i]/=g;
    }
    ll ans=1;
    for(i=0;i<r;i++)
        ans=(ans*A[i]%mod);
    return ans;
}
const int SIZE=2000008;
bool judgePermutation(int a[], int n){
    static int used[SIZE+1];
    for(int i = 1; i <= n; i++) used[i] = 0;
    for(int i = 0; i < n; i++) used[a[i]] = 1;
    for(int i = 1; i <= n; i++) {
        if(!used[i]) return 0;
    }
    return 1;
}
bool check(string s, int k, int index){
	rep(i,index-k,index+k+1){
		if(i==index) continue;
		if(i>=0 && i<sz(s)){
			if(s[i]=='1') return false;
		}
	}
	return true;
}
int main(){ 
//CONDITION && cout << "YES" || cout << "NO"; cout << '\n';
//////////////////////////////////////////////////////////////////////
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cerr.tie(NULL);
//For fast IO
///////////////////////////////////////////////////////////////////// 
//  std::cout.unsetf ( std::ios::floatfield );  // floatfield not set
//  std::cout.precision(10);
//  freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
	w(t){
		int n,k,cnt=0,f=1;
		cin>>n>>k;
		string s;
		cin>>s;
		rep(i,0,n){
			if(s[i]=='1') f=0;
		}
		if(f){
			int cnt=0;
			cnt+=(n/(k+1));
			if(n%(k+1)) cnt++;
			cout<<cnt<<endl;
		}
		else{
		int i1=0,i2=n-1;
		while(s[i1]!='1') i1++;
		while(s[i2]!='1') i2--;
		//cout<<i1<<" "<<i2<<endl;
		rep(i,i1,i2+1){
			int j=i;
			if(s[i]=='1') continue;
			while(j<=i2 && s[j]=='0') j++;
			int l=j-i;
			//cout<<i<<" "<<l<<" "<<j<<endl;
			cnt+=(l-(k))/(k+1);
			i=j;
		}
		//cout<<i1<<" "<<i2<<endl;
		int l1=max(0,i1-k), l2=max(0,n-1-i2-k);
		//cout<<l1<<" "<<l2<<endl;
		int cnt1=0,cnt2=0;
			cnt1+=(l1/(k+1));
			if(l1%(k+1)) cnt1++;
			cnt2+=(l2/(k+1));
			if(l2%(k+1)) cnt2++;
		cout<<cnt+cnt1+cnt2<<endl;
		}
	}
	return 0;
}
