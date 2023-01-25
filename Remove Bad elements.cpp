#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[100000]={0};
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        arr[x]++;
	    }
        cout<<n-(*max_element (arr, arr+100000))<<endl;
	}
	return 0;
}
