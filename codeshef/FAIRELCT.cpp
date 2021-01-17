#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<fstream>
#include<climits>
#include<math.h>
using namespace std;
typedef long long ll ;
ifstream fin("tests");
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
  fin>>n>>m;
  vector<ll> jackson(n,0);
  vector<ll> johnson(m,0);
  ll jackson_votes = 0;
  ll johnson_votes = 0;

  for(int i =0;i<n;i++){
    fin>>jackson[i];
  }
  for(int i =0;i<m;i++){
    fin>>johnson[i];
  }

  sort(jackson.begin(),jackson.end(),increasing);
  sort(johnson.begin(),johnson.end(),decreasing);

  for(auto u:jackson){
    jackson_votes+=u;
  }
  for(auto u:johnson){
    johnson_votes+=u;
  }
  int i =0;int j =0;
  int swaps =0;
  bool successful = false;
  while(i<jackson.size() && j< johnson.size()){
    if(jackson_votes > johnson_votes){
      successful = true;
      break;
    }
    jackson_votes-=jackson[i];
    jackson_votes+=johnson[j];

    johnson_votes-=johnson[j];
    johnson_votes+=jackson[i];

    int temp = jackson[i];
    jackson[i] = johnson[j];
    johnson[j] = temp;
    i++;
    j++;
    swaps++;
  }
  if(successful){
    cout<<swaps<<endl;
  }else{
    cout<<-1<<endl;
  }
}

int main() {

  ll t;
  fin>>t;
  while(t--){
    solve();
  }
  return 0;
}
