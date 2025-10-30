#include<bits/stdc++.h>
using namespace std;
#define uid(a,b) uniform_int_distribution<int>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int ans(int x, int y, int step, string &s, vector<bitset<7>> &v){
  cout<<x<<' '<<y<<' '<<step<<"\n";
  if(x<0 || x>6 || y<0 || y>6 || v[x][y]) return 0;
  if(x==0 && y==6){
    return step==48?1:0;
  }
  if(step==48) return 0;
  if((x>0 && x<6 && y>0 && y<6) && ((!v[x-1][y] && !v[x+1][y] && v[x][y+1] && v[x][y-1])||(!v[x][y-1] && !v[x][y+1] && v[x+1][y] && v[x-1][y]))) return 0;
  if((x==0 || x==6) && (y>0 && y<6) && (!v[x][y-1] && !v[x][y+1])) return 0;
  if((y==0 || y==6) && (x>0 && x<6) && (!v[x-1][y] && !v[x+1][y])) return 0;
  v[x].set(y);
  int res=0;
  if(s[step]=='R' && x+1<7 && !v[x+1][y]){
    res=ans(x+1,y,step+1,s,v);
  }
  else if(s[step]=='U' && y+1<7 && !v[x][y+1]){
    res=ans(x,y+1,step+1,s,v);
  }
  else if(s[step]=='L' && x-1>-1 && !v[x-1][y]){
    res=ans(x-1,y,step+1,s,v);
  }
  else if(s[step]=='D' && y-1>-1 && !v[x][y-1]){
    res=ans(x,y-1,step+1,s,v);
  }
  else if(s[step]=='?'){
    vector<int> mx={1,0,-1,0};
    vector<int> my={0,1,0,-1};
    for(int i=0;i<4;i++){
      int nx=x+mx[i];
      int ny=y+my[i];
      res+=ans(nx,ny,step+1,s,v);
    }
  }
  v[x].reset(y);
  return res;
}

void solve(){
  string s;cin>>s;
  vector<bitset<7>> v(7);
  cout<<ans(0,0,0,s,v);
}

int main(){ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while (t--){solve();}
}


