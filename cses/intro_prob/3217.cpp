#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void put(int row, int col, vector<vector<int>> &ans){
  int i=row,j=col;
  if(i<4 && j<4) return;
  ans[i].push_back(INT_MAX);
  if(i<2) ans[i][j]=min(ans[i][j],1+ans[i+1][j-2]);
  if(j<2) ans[i][j]=min(ans[i][j],1+ans[i-2][j+1]);
  if(i-2>-1 && j-1>-1) ans[i][j]=min(ans[i][j],1+ans[i-2][j-1]);
  if(i-1>-1 && j-2>-1) ans[i][j]=min(ans[i][j],1+ans[i-1][j-2]);
}

void solve(){
  int n;cin>>n;
  vector<vector<int>> ans(n);
  ans[0]={0,3,2,3};
  ans[1]={3,4,1,2};
  ans[2]={2,1,4,3};
  ans[3]={3,2,3,2};
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      put(i,j,ans);
    }
    for(int j=0;j<=(i-1);j++){
      put(j,i,ans);
    }
  }
  if(n==4){
    ans[0][3]=5;
    ans[3][0]=5;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<ans[i][j]<<' ';
    }
    cout<<"\n";
  }
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


