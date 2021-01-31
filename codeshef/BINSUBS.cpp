#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<climits>
#include<math.h>
using namespace std;
typedef long long ll ;
void shortestIncreasingSubSequence(ll *ar,ll n){
  
}
void solve(){
  ll n ;
  cin>>n;
  ll *ar = new ll[n];
  for(int i =0;i<n;i++){
    cin>>ar[i];
  }
  shortestIncreasingSubSequence(ar,n);
}

int main() {

  ll t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
