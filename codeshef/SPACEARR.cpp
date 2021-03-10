#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
bool f (ll a,ll b){return a-b;};
bool check(ll *ar , ll *pr , int n){
	for(int i =0;i<n;i++){
		if(!(ar[i]<=pr[i])){
			return false;
		}
	}
	return true;
}
void solve(){
	int looser = 1;
	ll n ;
	cin>>n;
	ll *ar = new ll[n];
	ll *pr = new ll[n];
	for(int i =0;i<n;i++){
		cin>>ar[i];
	}
	for(int i =0;i<n;i++){
		pr[i]=i+1;
	}
	sort(ar,ar+n);	
	bool flag = check(ar,pr,n);
	if(!flag){
		cout<<"Second\n";
		return ;
	}
	ll sum1 = 0;
	for(int i=0;i<n;i++){
		sum1+=ar[i];
	}
	ll sum2 = (n * (n+1))/2;

	ll r = sum2-sum1;
	if(r%2==0){
		cout<<"Second\n";
	}else{
		cout<<"First\n";
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