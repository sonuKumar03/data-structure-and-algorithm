#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
typedef long long ll ;

ll hashString(string s){
	const int p = 31;
	const int m = 1e9+9;
	ll hash_value = 0;
	ll p_pow = 1;
	for(char c :s){
		hash_value = ((hash_value  + (c - 'a'+1))*p_pow ) %m;
		p_pow = (p_pow*p)%m;
	}
	return hash_value;
}
void solve(){
	ll  n;
	string s,str;
	while(cin>>n>>s>>str){
		
	}	
}
int main(){
	solve();
	return 0;
}