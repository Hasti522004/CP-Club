#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    while(k>0){
	        if(n<m){
	            n++;
	        }
	        else if(n>m){
	            m++;
	        }
	        else{
	            break;
	        }
	        k--;
	    }
	    cout<<abs(m-n)<<endl;
	}
	return 0;
}
