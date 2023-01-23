#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int arr[26];
    	for(int i=0;i<26;i++){
    	    arr[i]=0;
    	}
	    for(int i=0;i<n;i++){
	        arr[s[i]-'a']++;
	    }
	    int flag=0;
	    for(int i=0;i<26;i++){
	        if(arr[i]%2!=0){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
