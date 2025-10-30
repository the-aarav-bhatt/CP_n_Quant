#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n,m,k;cin>>n>>m>>k;
  vector<int> app(n);
  vector<int> want(m);
  for(int &x:app){cin>>x;}
  for(int &x:want){cin>>x;}
  sort(app.begin(),app.end());
  sort(want.begin(),want.end());
  int j=0,count=0;
  for(int i=0;i<n;i++){
    auto it=lower_bound(want.begin()+j,want.end(),app[i]-k);
    if(it!=want.end() && *it<=app[i]+k) {count++;j=it-want.begin()+1;}
  }
  cout<<count<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


