#include<iostream>
using namespace std;
typedef long long ll;

void solve(){
	ll n,x,k;
	cin>>n>>x>>k;
	bool holed = false;
	ll i =0;
	printf("{ ");
	while(i<n+2 && !holed){
		printf("%d ", i);
		if(i==x){
			holed = true;
			break;
		}
		i+=k;
	}
	printf("} ");
	printf(" \t{ ");
	ll j = n+1;
	while(!holed && j>=0){
		printf("%d ", j);
		if(j==x){
			holed = true;
			break;
		}
		j=j-k;
	}
	printf("}");
	if(holed){
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