#include<iostream>
#include <cmath>
 using namespace std;
 void solve(){
 	float k1,k2,k3,v;
 	cin>>k1>>k2>>k3>>v;
 	float finalSpeed = k1*k2*k3*v;
 	float time = 100/finalSpeed;
 	float precise_speed =round(time*100.0)/100.0;
	
	if(precise_speed < (float)9.58){
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