
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




ll helper(int ind,int prev,ll a[],vector<vector<ll>>& dp,int m,int n){
    
    
    if(ind==n-1) {
        ll cnt=0;
      if(a[ind]==0)  {
          if(ind==0) {
            for(ll val=1;val<=m;val++) {
               cnt+=1;   
            }
        }
        else {
            for(ll diff=-1;diff<=1;diff++) {
                ll curr=prev+diff;
                if(curr>=1 && curr<=m)cnt+=1;
            }
        }
          
      }
      else if(abs(prev-a[ind])<=1) cnt=1;
      
      return cnt;
    }
    
    if(dp[ind][prev]!=-1) return dp[ind][prev]; 
    ll ans=0;
    if(a[ind]==0) {
        if(ind==0) {
            for(ll val=1;val<=m;val++) {
               ans+=helper(ind+1,val,a,dp,m,n);   
            }
        }
        else {
            for(ll diff=-1;diff<=1;diff++) {
                ll curr=prev+diff;
                if(curr>=1 && curr<=m)ans+=helper(ind+1,curr,a,dp,m,n);
            }
        }
    }
    else {
        if(prev!=0 && abs(prev-a[ind])>1) return 0;
        ans+=helper(ind+1,a[ind],a,dp,m,n);
    }
    
//   dp[ind][prev]=ans;
   return ans;
}

 
void solve()
{
     //Suraj Patel
     int n;
     int m;
     cin>>n;
     cin>>m;
    
    ll a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    
    
    vector<vector<ll>> dp(n+1,vector<ll>(m+1,-1));
    ll ans=helper(0,0,a,dp,m,n);
    cout<<ans%mod<<endl;
 
 
    
}
 
 

int main()
{
   solve();

    return 0;
}




       
   