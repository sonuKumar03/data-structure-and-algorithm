#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;

int sum (vector<int> ar){
	ll s=0;
	for(int i =0;i<ar.size();i++){
		s+=ar[i];
	}
	return s;
}
int  f(int n,vector<int> ar){
	if(n==1){
		return 1;
	}else{

		ar.push_back(ar[0]);
		int res1 = 1+f(n,ar);

		
		ar[0]=ar[0]+1;
		int res2 =1+ f(n,ar);

		return min(res1,res2);

	}
}

void solve(){
	ll n;
	cin>>n;
	vector<int>  ar ;
	ar.push_back(1);
	int i =0;
	cout<<f(n,ar,i);
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	solve();
	return 0;
}