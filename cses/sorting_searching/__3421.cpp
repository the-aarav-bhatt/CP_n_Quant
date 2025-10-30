#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<int> dp(n+1);
  map<int,int> lidx;
  dp[1]=1;
  int tmp;cin>>tmp;
  lidx[tmp]=0;
  for(int i=1;i<n;i++){
    int num;cin>>num;
    dp[i+1]=2*dp[i];
    if(lidx.count(num)){
      dp[i+1]-=dp[lidx[tmp]+1];
    }
    else dp[i+1]++;
    lidx[num]=i;
  }
  for(int i=0;i<n;i++){
    cout<<dp[i]<<' ';
  }
  cout<<dp[n];
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


