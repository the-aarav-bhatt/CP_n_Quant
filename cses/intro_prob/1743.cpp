#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  string s;cin>>s;
  int n=s.size();
  vector<int> ans(n);
  for(int i=0;i<n;i++){
    ans[i]=s[i]-'A';
  }
  sort(ans.begin(),ans.end());
  for(int i=1;i<n;i++){
    if(ans[i]!=ans[i-1]) continue;
    auto it=upper_bound(ans.begin()+i,ans.end(),ans[i-1]);
    if(it==ans.end()) continue;
    swap(ans[i],ans[it-ans.begin()]);
  }
  int isit=1;
  for(int i=1;i<n;i++){
    isit&=(ans[i]!=ans[i-1]);
  }
  for(int i=0;i<n;i++){
    cout<<(char)(ans[i]+'A');
  }
  /*if(isit){
    for(int i=0;i<n;i++){
      cout<<(char)(ans[i]+'A');
    }
  }
  else cout<<-1;*/
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


