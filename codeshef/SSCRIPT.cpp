#include<iostream>
using namespace std;

int f(string str,int i ){
	if(i<str.length()){
		if(str[i]=='*'){
			return 1+f(str,i+1);
		}
	}	
	return 0;
}

void solve(){
	int n,k;
	cin>>n>>k;
	string str;
	cin.ignore();
	cin>>str;
	bool flag = false;
	int count = 0;
	int i =0;
	while(i<n	){
		if(str[i]=='*'){
			count++;
		}else{
			count =0;
		}
		if(count>=k){
			flag =  true;
			break;
		}
		i++;
	}	
	if(flag){
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