#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<climits>
#include<math.h>
using namespace std;
typedef long long ll ;
int findMinOperations(ll *ar , ll n , ll sum){
  int count = 0;
  bool flag = false;
  for(int i =0;i<n;i++){
      sum-=ar[i];
      int p =ceil(ar[i]/2)-1;
      for(int j =0;j<=p;j++){
        ll r = pow(ar[i],j);
        if((sum+r)%2==0){
          flag = true;
          break;
        }
      }
      count++;
      if(flag){
        break;
      }else{
        sum+=ar[i];
      }
  }
  if(flag){
    return count;
  }
  return -1;
}
void solve(){ 
  ll n;
  cin>>n;
  ll sum =0;
  ll *ar = new ll[n];
  for(int i =0;i<n;i++){
    cin>>ar[i];
    sum+=ar[i];
  }

  if(sum%2!=0){
    cout<<findMinOperations(ar,n,sum)<<endl;
  }else {
    cout<<0<<endl;
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
