#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int r,g,b,m,k;
	    cin>>r>>g>>b>>m;
	    int maxr=INT_MIN,maxg=INT_MIN,maxb=INT_MIN;
	    for(int i=0;i<r;i++){
	        cin>>k;
	        if(k>maxr){
	            maxr=k;
	        }
	    }
	    for(int i=0;i<g;i++){
	        cin>>k;
	        if(k>maxg){
	            maxg=k;
	        }
	    }
	    for(int i=0;i<b;i++){
	        cin>>k;
	        if(k>maxb){
	            maxb=k;
	        }
	    }
	    while(m--){
	        if(maxr>=maxg && maxr>=maxb){
	            maxr/=2;
	        }
	        else if(maxg>=maxr && maxg>=maxb){
	            maxg/=2;
	        }
	        else{
	            maxb/=2;
	        }
	    }
	    cout<<max(maxr,max(maxg,maxb))<<endl;
	}
	return 0;
}
