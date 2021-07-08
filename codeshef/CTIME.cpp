#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 void solve(){
 	ll n,k,f;
 	cin>>n>>k>>f;
 	vector<pair<int,int>>timeslots;
 	for(int i=0;i<n;i++){
	 	ll start,end;
	 	cin>>start>>end;
	 	timeslots.push_back(make_pair(start,end));
 	}
	ll ans = 0;
	vector<pair<int,int>>::iterator it = timeslots.begin();
	ll last_end = it->second;		
	it++;
	for(; it != timeslots.end();it++){
		ans += it->first - last_end;
		last_end = it->second;
	} 
	// cout<<ans<<" \t";
	if(ans >= k || f - last_end >= k ){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
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
