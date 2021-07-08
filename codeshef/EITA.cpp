#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 void solve(){
 	int d,x,y,z;
 	cin>>d>>x>>y>>z;
 	int s1 =  7 * x;
 	int s2 = y *d + (7-d)*z;
 	if(s1 > s2){
 		cout<<s1<<endl;
 	}else{
 		cout<<s2<<endl;
 	}
 }



int main() {
	int t;
	cin>>t;
	while(t--){
	  solve();
	}
	return 0;
}
