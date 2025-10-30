#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<pair<int,int>> mov;
  for(int i=0;i<n;i++){
    int s,e;cin>>s>>e;
    mov.push_back({e,s});
  }
  sort(mov.begin(),mov.end());
  /*cout<<"\n";
  for(int i=0;i<n;i++){
    cout<<mov[i].first<<' '<<mov[i].second<<"\n";
  }
  cout<<"\n";*/
  int st=0,cnt=0;
  for(int i=0;i<n;i++){
    if(mov[i].second<st) continue;
    cnt++;st=mov[i].first;
  }
  cout<<cnt;
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


