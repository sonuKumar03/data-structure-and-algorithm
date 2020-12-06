#include<iostream>
using namespace std;
typedef long long ll;
void print(int *ar,int n){
	for(int i =0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}
void flip(int *ar,int start,int end){
	for(int i =start;i<=end;i++){
		ar[i]=ar[i]==0?1:0;
	}	
}
void solve(){
	ll g;
	cin>>g;
	while(g--){
		int i,q;
		ll n;
		cin>>i>>n>>q;
		if(n%2==0||i==q){
			cout<<n/2<<endl;
		}else{
			cout<<n/2 +1 <<endl;	
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0 ;
}