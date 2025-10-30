#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n,x;cin>>n>>x;
  vector<pair<int,int>> nos(n);
  for(int i=0;i<n;i++){
    int tmp;cin>>tmp;
    nos[i]={tmp,i+1};
  }
  sort(nos.begin(),nos.end());
  int j=n-1;
  int isit=0;
  for(int i=0;i<n;i++){
    while(j>i && nos[i].first+nos[j].first>x) j--;
    if(j>i && nos[i].first+nos[j].first==x){
      cout<<nos[i].second<<' '<<nos[j].second<<"\n";isit=1;
    }
    if(isit) break;
  }
  if(!isit) cout<<"IMPOSSIBLE";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


