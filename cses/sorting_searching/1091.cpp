#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n,m;cin>>n>>m;
  multiset<int> cost;
  for(int i=0;i<n;i++){
    int tmp;cin>>tmp;
    cost.insert(tmp);
  }
  vector<int> ans(m);
  for(int i=0;i<m;i++){
    int tmp;cin>>tmp;
    auto it=cost.upper_bound(tmp);
    if(it!=cost.begin()){
      it--;ans[i]=*it;
      cost.erase(it);
    }
    else ans[i]=-1;
  }
  for(int i:ans){cout<<i<<"\n";}
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


