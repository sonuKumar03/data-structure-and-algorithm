#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<fstream>
#include<climits>
#include<math.h>
using namespace std;
typedef long long ll ;
// ifstream fin("tests");

void solve(){
  ll n,k,d;
  cin>>n>>k>>d;
  ll total_problems=0;
  for(int i =0;i<n;i++){
    ll a;
    cin>>a;
    total_problems+=a;
  }
  if(total_problems<k){
    cout<<0<<endl;
    return ;
  }
  if(total_problems >=k){
    ll max_days = floor(total_problems/k);
    if(max_days<=d){
        cout<<max_days<<endl;
    }else{
      cout<<d<<endl;
    }
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
