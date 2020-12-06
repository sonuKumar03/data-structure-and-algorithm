#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;

void solve(){
	ll n,k;
	cin>>n>>k;
	ll *ar = new ll[n];
	for(int i =0;i<n;i++){
		cin>>ar[i];
	}
	ll s = 0;
	int j =0;
	for(j;j<n;j++){
		if(s+ar[j]<k){
			break;
		}
		s = s + ar[j] -k ;
	}

	if(s==0){
		cout<<j+1<<endl;
		return ;
	}
	cout<<s/k +j+1<<endl;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}