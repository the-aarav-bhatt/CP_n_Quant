#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  map<int,int> idx;
  long long ans=0;
  int last=0;
  for(int i=0;i<n;i++){
    int num;cin>>num;
    if(idx.count(num)){
      last=max(idx[num]+1,last);
    }
    idx[num]=i;
    ans+=1LL*(i-last+1LL);
    //cout<<num<<' '<<(i-last+1)<<"\n";
  }
  cout<<ans;
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


