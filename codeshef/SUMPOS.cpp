#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<climits>
#include<math.h>
using namespace std;
typedef long long ll ;
void solve(){
  ll x,y,z;
  cin>>x>>y>>z;

  if(x+y ==z || x+z ==y ||  z+y==x ){
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
