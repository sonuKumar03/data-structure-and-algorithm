#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;
typedef long long ll;

void solve(){
	int a[3],b[3];
	const int n = 3;
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	for(int i =0;i<n;i++){
		cin>>b[i];
	}
	int a_earned=0,b_earned=0;

	for(int i =0;i<n;i++){
		if(a[i]>b[i]){
			a_earned++;
		}
		else if(b[i]>a[i]){
			b_earned++;
		}
	}
	cout<<a_earned<<" "<<b_earned<<endl;

}
int main(){
		solve();
}