#include<bits/stdc++.h>
using namespace std;
int main()
{
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
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++)
        {
            umap[arr[i]]++;
        }
        int m=0;
        for(auto it:umap)
        {
            if(m<it.second)
            {
                m=it.second;
            }
        }
        if(n<=2||m==n)
        {
            cout<<0<<endl;
        }
        else if(m==1)
        {
            cout<<n-2<<endl;
        }
        else
        {
            cout<<n-m<<endl;
        }
    }
    return 0;
}