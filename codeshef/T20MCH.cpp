#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<fstream>
#include<climits>
#include<math.h>
using namespace std;
void solve(){
int requiredRun, over, run;
cin>>requiredRun>>over>>run;

int remainingOvers = 20-over;

int times = remainingOvers *6;

int maxScore = times*6;

int maxScoreAchieved = maxScore+ run;
 
 cout<<maxScoreAchieved<<" "<<requiredRun<<endl;  

 if(maxScoreAchieved>requiredRun){
  cout<<"YES\n";
 }else{
  cout<<"NO\n";
 }

}
int main() {
  // int t;
  // cin>>t;
  // while(t--){
    solve();
  // }
  return 0;
}
