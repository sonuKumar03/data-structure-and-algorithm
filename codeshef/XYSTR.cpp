#include<bits/stdc++.h>
using namespace std;

int countFriends(string str,int len){
	int ans = 0;
 	for(int i =0;i<len-1;){
 		if(str[i]!=str[i+1]){
 			i+=2;
 			ans++;
 			continue;
 		}
 		i++;
 	}
 	return ans;
 }

void solve(){
	string str;
	getline(cin,str);
	int len = str.length();
	cout<<countFriends(str,len)<<endl;
}
 int main(){
 	int t;
 	cin>>t;
 	cin.ignore();
 	while(t--){
 		solve();
 	}
 }
