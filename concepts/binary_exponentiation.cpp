#include <iostream>
using namespace std;
typedef long long ll;
ll binpow(int a,int b){
	if(b==0){
		return 1;
	}
	ll res = binpow(a,b/2);
	if(b%2){
		return res * res *a ;
	}
	return res*res;
}

ll binpow_non_rec(ll a,ll b){
	ll res = 1;
	while(b>0){
		if(b&1){
			cout<<b<<endl;
			res = res*a;
		}
		a = a*a;
		b = b>>1;
	}
	return res;
}

int main(){
	ll a,b;
	cin>>a>>b;
	ll r = a&1;
	ll res = binpow_non_rec(a,b);
	cout<<res<<endl;
	return 0;
}