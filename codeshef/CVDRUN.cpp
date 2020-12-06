#include<iostream>
using namespace std;
typedef long long ll;
void solve(){
	ll n,k,x,y;
	cin>>n>>k>>x>>y;
	bool f = false;
	for(int i =1;i<=n;i++){
		if(x ==y){
			f = true;
			break;
		}
		x = (x+k)%n;
	}
	if(f){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
}

int main(){
    int t;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}