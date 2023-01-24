#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long count=1;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                count=count*i;
            }
            while(n%i==0)
            {
                n=n/i;
            }
        }
        if(count==1)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<n*count<<endl;
        }

    }
}