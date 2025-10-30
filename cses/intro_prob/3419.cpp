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
  int n;cin>>n;
  int m=n+(n%2);
  vector<vector<int>> ans(m);
  for(int i=0;i<m;i+=2){
    for(int j=0;j<i+2;j++){
      ans[i].push_back(2*(i/2)+j);
      ans[i+1].push_back(2*(i/2)+j);
    }
    for(int j=i+2;j<m;j++){
      ans[i].push_back(j);
      ans[i+1].push_back(j);
    }
    for(int j=0;j<m;j+=2){
      swap(ans[i+1][j],ans[i+1][j+1]);
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<ans[i][j]<<' ';
    }
    cout<<"\n";
  }
  cout<<"\n";
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}

