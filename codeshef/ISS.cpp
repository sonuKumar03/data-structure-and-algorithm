#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 100000;
ll gcd(ll a,ll b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
void solve(){
	int k;
	cin>>k;
	int len = 2*k+1;
	vector<int> ar(len,0);
	for(int i =0;i<len;i++){
		ar[i]= 1 + pow(i+1,2);
	}
	ll ans = 0;
	for(int i =0;i<len-1;i++){
		ans += gcd(ar[i],ar[i+1]);
	}
	cout<<ans<<" ";
	cout<<endl;
}	

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}