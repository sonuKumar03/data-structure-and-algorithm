#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<fstream>
#include<climits>
#include<math.h>
using namespace std;
typedef long long ll ;
void solve(){
  ll  n ;
  cin>>n;
  ll *roses = new ll[n];
  for(int i =0;i<n;i++){
    cin>>roses[i];
  }
  ll happiness = -1;
  for(int i =0;i<n;i++){
    int t = roses[i] + happiness;
    if(t>happiness){
      happiness = t;
    }
  }
  cout<<happiness<<endl;
}

int main() {

  ll t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
