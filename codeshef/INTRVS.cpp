#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<climits>
#include<math.h>
using namespace std;
typedef long long ll ;
int countNumberOfSolved(ll *ar,ll n){
  ll count=0;
  for(int i =0;i<n;i++){
    if(ar[i]!=-1){  
      count++;
    }
  }
  return count;
}
bool checkIfTooSlow(ll *ar,ll n, ll k){
  for(int i =0;i<n;i++){
    if(ar[i]>k){
      return true;
    }
  }
  return false;
}

bool checkIfBot(ll *ar , ll n){
  int c = 0;
  for(int i =0;i<n;i++){
    if(ar[i]==0 || ar[i]==1){
      c++;
    }
  }
  return n==c;
}
void solve(){
  int n,k;
  cin>>n>>k;
  ll *ar = new ll[n];
  for(int i =0;i<n;i++){
    cin>>ar[i]; 
  }
  int no_of_solved_problems = countNumberOfSolved(ar,n);

  if(no_of_solved_problems<ceil(n/(float)2)){
    cout<<"Rejected\n";
    return ;
  }
  if(checkIfTooSlow(ar,n,k)){
    cout<<"Too Slow\n";
    return ;
  }

  if(checkIfBot(ar,n)){
    cout<<"Bot\n";
    return ;
  } 
  cout<<"Accepted\n";
  return;
}

int main() {

  ll t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
