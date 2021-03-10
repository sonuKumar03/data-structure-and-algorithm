#include<iostream>
using namespace std;
typedef long long ll;


void solve(){
	ll n,h,x;
	bool canSolve=false;
	cin>>n>>h>>x;
	ll t;
	while(n--){
		cin>>t;
		if(x+t==h){
			canSolve = true; break;
		}
	}
	if(canSolve){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	cout<<endl;
}


int main(){
	// ll t;
	// cin>>t;
	// while(t--){
		solve();
	// }
}