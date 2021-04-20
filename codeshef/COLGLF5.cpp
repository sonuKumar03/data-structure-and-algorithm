#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

void solve(){
	ll f,c;
	cin>>f>>c;
	vector<pair<ll,char>>ar;
	for(int i =0;i<f;i++){
		ll a;
		cin>>a;
		ar.push_back(make_pair(a,'f'));
	}	
	for(int i =0;i<c;i++){
		ll a;
		cin>>a;
		ar.push_back(make_pair(a,'c'));
	}

	sort(ar.begin(), ar.end(), [](auto &left, auto &right) {
    	return left.first < right.first;
	});

	char current = 'f' ;
	int count = 0;

	for(auto a:ar){
		if(a.second!=current){
			count++;
			current = a.second;
		}
	}
	cout<<count<<endl;
}

int main(){
	ll t;
	cin>>t;
	cin.ignore();
	while(t--){
		solve();
	}
}