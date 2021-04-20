#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isperfectSquare(ll n){
	ll x = sqrt(n);
	return n==x*x;
}

void solve(){
	ll n ;
	cin>>n;
	ll *ar = new ll[n];
	bool flag = true;
	for(int i =0;i<n;i++){
		cin>>ar[i];
	}
	for(int i =0;i<n;i++){
		if(!isperfectSquare(ar[i])){
			flag = false; break;
		}
	}
	if(!flag){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
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