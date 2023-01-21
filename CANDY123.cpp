#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    int b;
	    cin>>a>>b;
        int count1=0,count2=0;
        int temp=1;
        while(a>=temp){
            a=a-temp;
            temp=temp+2;
            count1++;
        }
        temp=2;
        while(b>=temp){
            b=b-temp;
            temp=temp+2;
            count2++;
        }
        if(count1>count2){
            cout<<"Limak"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
	}
   
	return 0;
}
