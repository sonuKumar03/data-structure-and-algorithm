#include<iostream>
using namespace std;
typedef long long ll;

int f(int n){
	int sum =0;
	while(n>0){
		sum +=n%10;
		n=n/10;
	}
	return sum;
}

void solve(){
	string str ;
	getline(cin,str);
	int sum = 0;
	int j =0;	
	if(str.length()>1){
			for(int i =0;i<str.length();i++){
				sum += str[i]-'0';
			}
			j=1;
	}
	while(sum>9){
		j++;
		sum = f(sum);
		
	}
	cout<<j<<endl;
}
int main(){
	solve();
	return 0;
}