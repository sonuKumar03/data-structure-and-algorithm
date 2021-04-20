#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool f(int a,int b){
	return a-b;
}

void solve(){
	ll n,x;
	cin>>n>>x;
	vector<ll>ar;
	ll a;
	for(int i =0;i<n;i++){
	    cin>>a;
	    ar.push_back(a);
	}
	map<ll,ll>map;
	for(auto a :ar){
	    if(map.find(a)!=map.end()){
	        map[a]++;
	    }else{
	        map[a]=1;
	    }
	}
	cout<<map.size()<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}