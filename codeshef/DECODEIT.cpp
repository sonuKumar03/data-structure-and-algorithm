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
char letters[16];


void decodeIt(string str , int len){
  for(int i =0;i<len;i+=4){
    int k =3;
    int sum = 0;
    for(int j =i ;j<i+4;j++){
      int value = pow(2,k);
       sum += value*(int)(str[j]-'0');
      k--;
    }
    cout<<letters[sum]<<"";
  }
  cout<<endl;
}
void solve(){
  ll n;
  fin>>n;
  string str;
  fin>>str;
  decodeIt(str,n);
}

int main() {

  for(int i =0;i<16;i++){
    letters[i]=(char)'a'+i;
  }

  ll t;
  fin>>t;
  while(t--){
    solve();
  }
  return 0;
}
