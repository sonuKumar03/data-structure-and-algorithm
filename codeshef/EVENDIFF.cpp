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
  ll even=0;
  ll odd = 0;
ll a;
  for(int  i=0;i<n;i++){
    cin>>a;
    if(a%2==0){
      even++;
    }else{
      odd++;
    }
  }
  cout<<min(even,odd)<<endl;
}

int main() {

  ll t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
