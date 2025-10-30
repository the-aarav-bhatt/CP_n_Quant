#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<long long> nos(n);
  for(long long &x:nos){cin>>x;}
  long long curr=nos[0],maxi=curr;
  for(int i=1;i<n;i++){
    curr+=nos[i];
    if(curr<nos[i]) curr=nos[i];
    maxi=max(maxi,curr);
  }
  cout<<maxi<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


