#include<bits/stdc++.h>
using namespace std;
void solve(){
	int st;
	int *ar = new int[3];
	cin>>st;
	int a;
	for(int i =0;i<3;i++){
		cin>>ar[i];
	}
	int s1 = ar[0]+ar[1]+ar[2];
	int s2 = ar[0]+ar[1];
	int s3 = ar[0]+ar[2];
	if(st>=s1){
		cout<<"1\n";
	}
	else if (st>=s2 || st>=s3){
		cout<<"2\n";
	}
	else {
		cout<<"3\n";
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