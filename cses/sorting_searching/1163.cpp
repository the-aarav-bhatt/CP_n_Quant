#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int x,n;cin>>x>>n;
  map<int,int> cdist;
  set<int> pos={0,x};
  set<int> neg={-x,0};
  set<int> light;
  cdist[x]=1;
  for(int i=0;i<n;i++){
    int tmp;cin>>tmp;
    if(light.count(tmp)) continue;
    light.insert(tmp);
    int up=*pos.upper_bound(tmp);
    int lo=-*neg.upper_bound(-tmp);
    pos.insert(tmp);
    neg.insert(-tmp);
    cdist[up-lo]--;
    if(cdist[up-lo]==0) cdist.erase(up-lo);
    cdist[up-tmp]++;
    cdist[tmp-lo]++;
    cout<<(cdist.rbegin())->first<<' ';
  }
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


