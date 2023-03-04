#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define mem1(a)   memset(a,-1,sizeof(a))
#define mem0(a)   memset(a,0,sizeof(a))
// #define mem_1(a)  memset(a,1,sizeof(a))

typedef vector<int> vi;
typedef vector<long long int> vlli;
typedef vector<long long> vll;
typedef long long ll;
typedef long long int lli;
typedef vector<pair<int,int>> vpii;
typedef pair<int,int> pii;
typedef pair<int,char> pic;
typedef pair<char,int> pci;
typedef pair<ll,ll> pll;
ll mod=1000000007;
// ll a[100000001];
// void powerOftwo(ll n) {
//     a[0]=1,a[1]=1;
//     for(int i=2;i<n;i++) {
//         a[i]=2*a[i-1]%mod;
//     }
// }

int N=1000000001;
bool sieve[100];
void createSieve(){
    for(int i=2;i<=N;i++) {
        sieve[i]=true;
    }

    for(int i=2;i*i<=N;i++) {
        if(sieve[i]) {
            for(int j=i*i;j<=N;j+=i) {
                sieve[j]=false;
            }
        }
    }
}

// Suraj Patel
 
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 ll lcm(ll a,ll b) {
    return (a*b)/(gcd(a,b));
 }
int msb(int num) {
    return (int)(floor(log2(num)));
}

ll countDivisor(ll n)
{
    ll cnt=0;
    for(ll i=1;i*i<=n;i++) {
        // cout<<"i = "<<i<<"\n";

        if(n%i==0) {
            cnt++;
            // a.pb(i);
            if(n/i!=i) {
                cnt++; 
                // a.pb(n/i);
            }
        }
    }
    return cnt;
}

string reverse(string s) {
  string res;
  for(int i=s.length()-1;i>=0;i--) {
    res+=s[i];
}
  return res;

}

string decimalToBinary(ll n) {
    string s;
  
  while(n>0) {
  s+=char(n%2);
 n/=2;
 }

 return s;
} 

ll myXOR(ll x, ll y)
{
   return (x | y) & (~x | ~y);
}

int leastSignificantBit(int x) {
    return (x %2);
}

  bool isEqual(string a,string b){

    int n=a.length();
    for(int i=0;i<n;i++) {
        if(a[i]!=b[i]) return  false;
    }
   
   return true;
  }



 // \n
// ll dp[100001];
// or :-   ||

ll powfun(ll n,ll p) {
    
    ll val=n;
    for(ll i=1;i<p;i++ ) {
        val=(val*val)%mod;
    }

    return val;



}
void solve(){
     //Suraj Patel
 
int n;
cin>>n;
string s;
cin>>s;

int ans=n-1;

for(int i=0;i<n-2;i++) {
  if(s[i]==s[i+2]) ans--;
}

cout<<ans<<endl;



 
}

 
int main()
{  


    int t;
    cin >> t;
   
    
  // createSieve();
    while (t-- > 0)
    {
        
        solve();
      
    }

    return 0;
}




       
   