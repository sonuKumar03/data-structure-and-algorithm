#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>ar;
vector<ll>br;
vector<pair<ll,ll>>pairs;
vector<bool>chosen;
ll max_=LLONG_MIN;

void solve(){
	ll n;
	cin>>n;
	ar= vector<ll>();
	br= vector<ll>();
	chosen= vector<bool>(n,false);
	max_ =0;
	for(int i =0;i<n;i++){
		ll a;
		cin>>a;
		ar.push_back(a);
	}
	for(int i =0;i<n;i++){
		ll a;
		cin>>a;
		br.push_back(a);
	}
	sort(ar.begin(),ar.end());
	sort(br.begin(),br.end());
	cout<<ar.back()+br.back()<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}