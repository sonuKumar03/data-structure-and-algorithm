#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<fstream>
#include<climits>
#include<math.h>
using namespace std;
typedef long long ll ;
// ifstream cin("tests");
int increasing(int a,int b){
  return b>a;
}
int decreasing(int a,int b){
  return a>b;
}

void print(vector<ll> ar){
  for(auto u:ar){
    cout<<u<<" ";
  }
  cout<<endl;
}
void solve(){
  ll n,m;
  cin>>n>>m;
  vector<ll> jackson(n,0);
  vector<ll> johnson(m,0);
  ll jackson_votes = 0;
  ll johnson_votes = 0;

  for(int i =0;i<n;i++){
    cin>>jackson[i];
  }
  for(int i =0;i<m;i++){
    cin>>johnson[i];
  }

  sort(jackson.begin(),jackson.end(),increasing);
  sort(johnson.begin(),johnson.end(),decreasing);


  for(auto a:jackson){
    jackson_votes+=a;
  }
  for(auto a:johnson){
    johnson_votes+=a;
  }

  int swap = 0;
  int i=0;
  int j=0;
  bool f = false;
  while(i <= jackson.size() && j<=jackson.size()){
    if(jackson_votes > johnson_votes){
      f = true;
      break;
    }
    // cout<<jackson_votes<<" "<<johnson_votes<<endl;
    jackson_votes=jackson_votes-jackson[i] + johnson[j];
    johnson_votes=johnson_votes-johnson[j]+jackson[i];
    swap++;
    i++;
    j++;
  }

  if(f){
    cout<<swap<<endl;
  }else{
    cout<<-1<<endl;
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
