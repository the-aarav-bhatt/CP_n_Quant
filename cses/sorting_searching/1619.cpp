#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<int> in(n),out(n);
  for(int i=0;i<n;i++){
    cin>>in[i]>>out[i];
  }
  sort(in.begin(),in.end());
  sort(out.begin(),out.end());
  int cnt=0,mcnt=0,j=0;
  for(int i=0;i<n;i++){
    while(j<n && in[i]>out[j]) cnt--,j++;
    cnt++;
    mcnt=max(cnt,mcnt);
  }
  cout<<mcnt;
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


