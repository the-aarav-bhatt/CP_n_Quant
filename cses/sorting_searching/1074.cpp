#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<long long> nos(n);
  for(long long &x:nos){cin>>x;}
  sort(nos.begin(),nos.end());
  long long med,cost=0LL;
  if(n&1) med=nos[n/2];
  else med=nos[n/2]+(nos[(n+1)/2]-nos[n/2])/2;
  //cout<<med<<"\n";
  for(int i=0;i<n;i++){
    cost+=abs(nos[i]-med);
  }
  cout<<cost<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


