#include<iostream>
using namespace std;
typedef long long ll;

void solve(){
	int n,m;
	cin>>n>>m;
	int *ar = new int[m];
	for(int i=0;i<m;i++){
		ar[i]=0;
	}
	int a ;
	for(int i =0;i<n;i++){
		cin>>a;
		a-=1;
		ar[a]++;
	}
	int r = 0;
	for(int i =1;i<=m;i++){
		//printf("%d %d\n", i,ar[i-1]);
		if(ar[i-1]==0){
			r++;
		}
	}
	if(r>0	){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}

}
int main(){
	ll t;
	cin>>t;
	cin.ignore();
	while(t--){
		solve();
	}
}