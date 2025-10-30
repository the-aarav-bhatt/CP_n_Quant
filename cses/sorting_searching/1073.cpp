#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  vector<int> nos(n);
  vector<int> tails;
  cin>>nos[0];
  tails.push_back(0);
  for(int i=1;i<n;i++){
    cin>>nos[i];
    auto it=lower_bound(tails.begin(),tails.end(),i,[&](int idx1,int idx2){return nos[idx1]<=nos[idx2];});
    int pos=it-tails.begin();
    if(pos==tails.size()){
      tails.push_back(i);
    }
    else{
      tails[pos]=i;
    }
    /*for(int j:tails){
      cout<<nos[j]<<' ';
    }
    cout<<"\n";*/
  }
  cout<<tails.size();
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


