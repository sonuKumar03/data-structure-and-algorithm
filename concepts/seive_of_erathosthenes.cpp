/*
	for counting prime number in a range in nlog(logN) time 
*/
#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

void sieve(){
	ll n;
	cin>>n;
	ll maxN= 1000001;
	vector<int> is_primes(maxN,1);
	for(int i =2;i*i<=n;i++){
		if(is_primes[i]){
			for(int j = i*i;j<=maxN;j+=i){
				is_primes[j]=0;
			}
		}
	}

	if(is_primes[n]==1){
		cout<<n<<"is Prime \n";
	}else{
		cout<<n<<"is Not Prime \n";
	}
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		sieve();
	}
	return 0;
}