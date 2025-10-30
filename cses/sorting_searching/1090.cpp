#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n,x;cin>>n>>x;
  vector<int> wt(n);
  for(int &w:wt){cin>>w;};
  int cnt=0;
  sort(wt.begin(),wt.end(),greater<int>());
  /*for(int i:wt){
    cout<<i<<' ';
  }
  cout<<"\n";*/
  int j=n-1;
  for(int i=0;i<n;i++){
    if(wt[i]>x) continue;
    if(i==j) {cnt++;}//cout<<wt[i]<<"\n";}
    if(i>=j) break;
    if(wt[i]+wt[j]<=x){//cout<<wt[j]<<' ';
      j--;}
    //cout<<wt[i]<<"\n";
    cnt++;
  }
  cout<<cnt<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


