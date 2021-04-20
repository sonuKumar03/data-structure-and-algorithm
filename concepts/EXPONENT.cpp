#include<iostream>
using namespace std;
typedef long long int ll;
int power(int n,int p){
	if(p==0){
		return 1;
	}
	if(p==1){
		return n;
	}
	int t = power(n,p/2);
	return t*t*power(n,p%2);
}
int main()
{	
	int n,p;
	cin>>n>>p;
	cout<<power(n,p);
	return 0;
}