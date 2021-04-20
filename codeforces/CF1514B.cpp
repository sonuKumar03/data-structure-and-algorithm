#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll _max = LLONG_MIN;
ll _k;

void subset(vector<ll>ar, int i ,int n , vector<ll>pr){
	if(i==n-1){
		cout<<i<<" "<<n-1<<endl;
	}else{
		pr.push_back(ar[i]);
		subset(ar,i+1,n,pr);
		pr.pop_back();
		subset(ar,i+1,n,pr);
		cout<<_max<<endl;
	}
}

void solve(){
	ll n,k;
	cin>>n>>k;
	_k=k;
	ll l = pow(2,k);
	cout<<l<<endl;
	vector<ll> ar,pr;
	for(int i =0;i<=l;i++){
		ar.push_back(i);
	}
	subset(ar,0,ar.size(),pr);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}