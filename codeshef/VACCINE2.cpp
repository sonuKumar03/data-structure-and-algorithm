#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;


void solve(){
	ll n,d;
	cin>>n>>d;
	vector<int> risky_patient;
	vector<int> not_risky_patient;

	for(int i =0;i<n;i++){
		ll a;
		cin>>a;
		if(a<=9 || a>=80){
			risky_patient.push_back(a);
		}else{
			not_risky_patient.push_back(a);
		}
	}

	cout<<(risky_patient.size()/d + not_risky_patient.size()/d + risky_patient.size()%d + not_risky_patient.size()%d)<<endl;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}