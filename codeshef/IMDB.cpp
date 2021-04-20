#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<climits>
#include<math.h>
using namespace std;
typedef long long ll ;
void solve(){
  ll n,x;
  cin>>n>>x;
  vector<pair<int,int>> movie;
  ll a,b;
  for(int i =0;i<n;i++){
    cin>>a>>b;
    movie.push_back(make_pair(a,b));
  }
  sort(movie.begin(),movie.end(),[](auto &left, auto &right) {
    return left.second < right.second;
  });

  ll maxRating = INT_MIN;
  for(auto ar:movie){
      if(maxRating< ar.second && ar.first <= x){
        maxRating = ar.second;
      }    
  }

  cout<<maxRating<<endl;

}

int main() {

  ll t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
