#include<iostream>
#include<math.h>
typedef long long ll;
using namespace std;
void solve(){
	ll n ;
	cin>>n;
	ll *ar = new ll	[n+1];
	for(int i =1;i<n+1;i++){
		cin>>ar[i];
	}
	ar[0]=0;
	int energy =0;
	int dollars = 0;
	for(int i =1;i<n+1;i++){
		if(((energy+ar[i-1])-ar[i])>0){
			energy +=ar[i-1]-ar[i];
		}else{
			dollars +=abs((energy+ar[i-1])-ar[i]);
			energy=0;
		}
		// cout<<ar[i-1]<<"-"<<ar[i]<<" = "<<ar[i-1]-ar[i]<<" "<<", e = "<<energy<<endl;
	}
	cout<<dollars<<endl;
}	
int main(){
	solve();
	return 0;
}