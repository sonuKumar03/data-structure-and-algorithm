#include <bits/stdc++.h>
using namespace std;

bool checkGroup(string str){
    // finds its groups
    if(str[0] >='a' && str[0] <='m'){ // first group
        for(int i =1;i<str.length();i++){
            if(!(str[i] >='a' && str[i] <='m')){
                return false;
            }
        }
        return true;
    }
    else if (str[0] >='N' && str[0] <='Z'){
        for(int i =1;i<str.length();i++){
            if(!(str[i] >='N' && str[i] <='Z')){
                return false;
            }
        }
        return true;
    }

    return false;
}

 void solve(){
        int n;
	    cin>>n;
	    vector<string> ar;
	    for(int i =0;i<n;i++){
	        string str;
	        cin>>str;
	        ar.push_back(str);
	    }
	    bool ans = true;
	    for(auto a:ar){
	    	ans = ans && checkGroup(a);
	    }
	    if(ans){
	        cout<<"YES\n";
	    }else{
	        cout<<"NO\n";
	    }
 }

int main() {
	int t;
	cin>>t;
	while(t--){
	  solve();
	}
	return 0;
}
