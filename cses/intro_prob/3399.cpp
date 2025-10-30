#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*-----------------DEBUG----------------------------*/
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif
void _print(long long t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p){cerr << "{";_print(p.first);cerr << ",";_print(p.second);cerr << "}";}
template <class T>
void _print(vector<T> v){cerr << "[ ";for (T i : v){_print(i);cerr << " ";}cerr << "]";}
template <class T>
void _print(set<T> v){cerr << "[ ";for (T i : v){_print(i);cerr << " ";}cerr << "]";}
template <class T>
void _print(multiset<T> v){cerr << "[ ";for (T i : v){_print(i);cerr << " ";}cerr << "]";}
template <class T, class V>
void _print(map<T, V> v)
{cerr << "[ ";for (auto i : v){_print(i);cerr << " ";}cerr << "]";}
/*------------------CODE-----------------------------*/

void solve(){
  int n,a,b;cin>>n>>a>>b;
  if(a==0 && b==0){
    cout<<"YES\n";
    for(int i=1;i<=n;i++){
      cout<<i<<' ';
    }
    cout<<"\n";
    for(int i=1;i<=n;i++){
      cout<<i<<' ';
    }
    cout<<"\n";
    return;
  }
  else if(a==0 || b==0 || (a+b)>n){
    cout<<"NO\n";return;
  }
  cout<<"YES\n";
  vector<int> ans1,ans2;
  if(a>=b){
    for(int i=1;i<=(a-b+2);i++){
      ans1.push_back(1+(i)%(a-b+2));
      ans2.push_back(i);
    }
    for(int i=1;i<=2*(b-1);i++){
      ans1.push_back(a+b+1-i);
      ans2.push_back(a-b+2+i);
    }
    for(int i=1;i<=(n-a-b);i++){
      ans1.push_back(i+a+b);
      ans2.push_back(i+a+b);
    }
  }
  else{
    for(int i=1;i<=(b-a+2);i++){
      ans2.push_back(1+(i)%(b-a+2));
      ans1.push_back(i);
    }
    for(int i=1;i<=2*(a-1);i++){
      ans2.push_back(b+a+1-i);
      ans1.push_back(b-a+2+i);
    }
    for(int i=1;i<=(n-a-b);i++){
      ans1.push_back(i+a+b);
      ans2.push_back(i+a+b);
    }
  }
  for(int i:ans1){
    cout<<i<<' ';
  }
  cout<<"\n";
  for(int i:ans2){
    cout<<i<<' ';
  }
  cout<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--){solve();}
}

