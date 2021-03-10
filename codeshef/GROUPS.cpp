#include<iostream>
using namespace std;
typedef long long ll;

ll findGrooups(string str,int n ){
	ll groups = 0;
	for(int i =0;i<n;i++){
		if(str[i]=='1'){
			groups++;
			while(str[i]=='1'){
				i++;
			}
		}
	}
	return groups;
}
void solve(){
	string str;
	getline(cin,str);
	int len = str.length();
	cout<<findGrooups(str,len)<<endl;
}
int main(){
	ll t;
	cin>>t;
	cin.ignore();
	while(t--){
		solve();
	}
}