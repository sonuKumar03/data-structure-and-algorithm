#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<fstream>
#include<climits>
#include<math.h>
using namespace std;
typedef long long ll ;
ifstream fin("tests");
char letters[16];


void solve(){
  int u,v,a,s;
  cin>>u>>v>>a>>s;
  if(u==v){
    
  }
  int r = u*u + 2*a*s;
  int r_ = sqrt(r);
  if(r<=v){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
}

int main() {

  ll t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
