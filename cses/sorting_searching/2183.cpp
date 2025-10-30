#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<long long> nos(n);
  for(long long &x:nos){cin>>x;}
  sort(nos.begin(),nos.end());
  long long last=1LL;
  for(int i=0;i<n;i++){
    if(nos[i]>last){
      cout<<last<<"\n";
      return;
    }
    last+=nos[i];
  }
  cout<<last<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


