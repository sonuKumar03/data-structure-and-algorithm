#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<climits>
#include<math.h>
#include<string>
std::string::size_type sz;
using namespace std;
typedef long long ll ;



bool isBetween(string p,string start, string end){

  // HH:MM AM HH:MM AM
  int cur_HH = stoi(p.substr(0,2),nullptr,0);
  int cur_MM = stoi(p.substr(3,2),nullptr,0);
  string cur_AM_PM = p.substr(7,2);


  int start_HH = stoi(start.substr(0,2),nullptr,0);
  int start_MM = stoi(start.substr(3,2),nullptr,0);
  string start_AM_PM = start.substr(7,2);


  int end_HH = stoi(end.substr(0,2),nullptr,0);
  int end_MM = stoi(end.substr(3,2),nullptr,0);
  string end_AM_PM = end.substr(7,2);

  return true;

}

bool isBetweenHelper(string p,string meeting){
  string start = meeting.substr(0,8);
  string end = meeting.substr(9,9);
  return isBetween(p,start,end);
}

void solve(){
  string p;
  getline(cin,p);

  int n ;
  cin>>n;
  cin.ignore();
  string *meetings = new string[n];
  for(int i =0;i<n;i++){
    getline(cin,meetings[i]);
  }
  string ans="";
  for(int i =0;i<n;i++){
      if(isBetweenHelper(p,meetings[i])){
        ans+="1";
      }else{
        ans+="0";
      }
  }
  cout<<ans<<endl;
}

int main() {

  ll t;
  cin>>t;
  cin.ignore();
  while(t--){
    solve();
  }
  return 0;
}
