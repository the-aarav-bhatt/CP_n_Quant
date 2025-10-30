#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n,m;cin>>n>>m;
  vector<vector<int>> ans(n);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      char tmp;cin>>tmp;
      ans[i].push_back(tmp-'A');
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      //cout<<i<<' '<<j<<' ';
      ans[i][j]++;
      //cout<<ans[i][j]<<' ';
      while((i>0 && ans[i-1][j]%4==ans[i][j]%4)||(j>0 && ans[i][j-1]%4==ans[i][j]%4)){ans[i][j]++;} //cout<<ans[j][j]<<' ';}
      cout<<(char)(ans[i][j]%4+'A');
    }
    cout<<"\n";
  }
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


