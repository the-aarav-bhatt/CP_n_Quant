#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
  int n;cin>>n;
  map<int,int> idx;

  //vector<int> tmp(n,-1);
  int maxi=0,last=0;
  for(int i=0;i<n;i++){
    int num;cin>>num;
    if(!idx.count(num) || idx[num]<last){

    //if(tmp[num-1]<last){
      idx[num]=i;

      //tmp[num-1]=i;
      continue;
    }
    maxi=max(maxi,i-last);
    last=idx[num]+1;
    idx[num]=i;

    //tmp[num-1]=i;
    /*for(int j:tmp){
      cout<<j<<' ';
    }
    cout<<"\n";*/

  }
  maxi=max(maxi,n-last);
  cout<<maxi;
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


