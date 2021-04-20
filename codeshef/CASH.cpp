#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
	ll n,k;
	cin>>n>>k;
	ll sum = 0;
	ll a;
	for(int i =0;i<n;i++){
		cin>>a;
		sum+=a;
	}
	cout<<sum%k<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}