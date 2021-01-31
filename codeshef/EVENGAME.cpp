#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<climits>
#include<math.h>
using namespace std;
typedef long long ll ;
void solve(){
  ll n;
  cin>>n;
  ll sum=0;
  ll a;
  for(int  i=0;i<n;i++){
    cin>>a;
    sum+=a;
  }
  if(sum%2==0){
    cout<<1<<endl;
  }else{
    cout<<2<<endl;
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
