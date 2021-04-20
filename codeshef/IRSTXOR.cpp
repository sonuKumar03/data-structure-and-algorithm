#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;
typedef long long ll;

void solve(){
	int n ;
	cin>>n;	
	int bits = 0;
	int d;
	d = n;
	while(d!=0){
        d /= 2;
	}

	string binary = bitset<10>(n).to_string();
	cout<<d<<" "<<binary.substr(d)<<" "<<bits<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}