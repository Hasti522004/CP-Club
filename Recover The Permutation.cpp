#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    	{
    	   cin>>arr[i];
    	}
	    vector<int> a;
	    for(int i=1;i<=n;i++)
	    {
	        a.push_back(i);
	    }
	    
	    for(int i=0;i<n;i++)
	    { 
	        if(arr[i]==0)
	        {
	            int temp=a[i+1];
	            a[i+1]=a[i];
	            a[i]=temp;
	        }
	    }
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}