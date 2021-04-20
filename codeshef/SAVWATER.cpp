#include<bits/stdc++.h>
using namespace std;
void solve(){
	int C,x,y,H;
	cin>>H>>x>>y>>C;
	int grayWater= x+(y)/2;
	int total_h_w = grayWater*H;
	if(total_h_w<=C){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}