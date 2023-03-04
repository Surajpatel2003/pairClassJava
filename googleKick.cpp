#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define mem1(a)   memset(a,-1,sizeof(a))
#define mem0(a)   memset(a,0,sizeof(a))

typedef vector<int> vi;
typedef vector<long long int> vlli;
typedef vector<long long> vll;
typedef long long ll;
typedef long long int lli;
typedef vector<pair<int,int>> vpii;
typedef pair<int,int> pii;
typedef pair<int,char> pic;
typedef pair<char,int> pci;
ll mod=1000000007;
double pi=3.1415926535; 
// ll a[100000001];
// void powerOftwo(ll n) {
//     a[0]=1,a[1]=1;
//     for(int i=2;i<n;i++) {
//         a[i]=2*a[i-1]%mod;
//     }
// }

int N=1000000001;
bool sieve[1000];
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
 
int gcd(int a, int b)
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

int countDivisor(int n,vi& a)
{
    int cnt=0;
    for(int i=1;i*i<=n;i++) {
        // cout<<"i = "<<i<<"\n";

        if(n%i==0) {
            cnt++;
            a.pb(i);
            if(n/i!=i) {
                cnt++; a.pb(n/i);
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

int myXOR(int x, int y)
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

ll getI(ll a[],int i){
    ll temp=0;
    return max(temp,max(a[i-1],a[i+1])-a[i]+1);
}


void solve(){
     //Suraj Patel
  
  
  ll r,a,b;
  cin>>r>>a>>b;
//   double pi = M_PI;
  double sum=0;
  ll R=r;
  while(true) {
      R=R*a;
      if(R>0) sum+=R*R;
      else break;
      
    //   cout<<"R = "<<R<<endl;
      
      R=R/b;
       if(R>0) sum+=R*R;
       else break;
       
        // cout<<"R = "<<R<<endl;
      
  }
  
  sum+=r*r;
  sum*=pi;
  cout<<setprecision(10)<<sum<<endl;
   

   
}
 
int main()
{

    int t;
    cin >> t;
  // createSieve();
   for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
      
    }

    return 0;
}




       
   