#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(vector<int> ar,int n){
	for(int i =0;i<n-1;i++){
		int b = ar[i]&ar[i+1];
		if(b==0){
			// cout<<ar[i]<<" "<<ar[i+1]<<" "<<b<<" ";
			return false;
		}
	}
	return true;
}

void solve(){
	int n;
	cin>>n;
	vector<int> ar ;
	for(int i =1;i<=n;i++){
		ar.push_back(i);
	}
	bool f = false;
	while(next_permutation(ar.begin(),ar.end())){
		f = check(ar,n);
		if(f){
			for(auto a:ar){
				cout<<a<<" ";
			}
			break;
		}
	}
	if(!f){
		cout<<-1;
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}