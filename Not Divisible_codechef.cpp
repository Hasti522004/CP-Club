#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=0;i<n/2;i++){
	        cout<<"1 2 ";
	    }
	    if(n%2!=0){
	        cout<<1;
	    }
	    cout<<endl;
	}
	return 0;
}
