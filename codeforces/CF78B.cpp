#include<iostream>
#include<math.h>
using namespace std;
void  solve(){
	int n;
	cin>>n;
	string a ="GBIV";
	if(n<7){
		cout<<"Wrong!";
	}else{
		cout<<"ROYGBIV";
	}

	n = n-7;
	for(int i =1;i<=n/4;i++){
		cout<<a;
	}

	n=n%4;
	string b ="";
	for(int i =0;i<n;i++){
		b=b+a[i];
	}
	cout<<b<<endl;
}
int main(){
	solve();
	return 0;
}