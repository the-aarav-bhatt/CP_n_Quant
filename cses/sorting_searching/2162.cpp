#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve1(){
  int n;cin>>n;
  vector<int> nos;
  for(int i=1;i<=n;i++){
    nos.push_back(i);
  }
  int i=0,st=0;
  while(st<nos.size()){
    i++;
    int num=nos[st];
    st++;
    if(i&1) nos.push_back(num);
    else cout<<num<<' ';
  }
}

void print(int n, int a, int b){
  if(n==1){
    cout<<a-b<<' ';
    return;
  }
  for(int i=2;i<=n;i+=2){
    cout<<a*i-b<<' ';
  }
  if(n&1) {cout<<a-b<<' ';b-=a;}
  else b+=a;
  a<<=1;
  print(n/2,a,b);
}
void solve2(){
  int n;cin>>n;
  print(n,1,0);
}

void solve3(){
  int n;cin>>n;
  int a=1,b=0;
  while(n){
    if(n==1){
      cout<<a-b<<' ';
      break;
    }
    for(int i=2;i<=n;i+=2){
      cout<<a*i-b<<' ';
    }
    if(n&1){
      cout<<a-b<<' ';
      b-=a;
    }
    else b+=a;
    a<<=1;
    n>>=1;
  }
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve3();}
}


