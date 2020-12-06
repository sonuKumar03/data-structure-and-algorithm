#include<iostream>
using namespace std;
typedef long long ll;
void solve(){
	ll n,x;
	cin>>n>>x;
	ll i =2;
	ll floor =1;
	while(true){
		if(i>=n){
			break;
		}
	i= i+x;		
	floor++;	
	}
	cout<<floor<<endl;	
}

int main(){
	int n ;
	cin>>n;
	while(n--){
		solve();
	}
	return 0;
}