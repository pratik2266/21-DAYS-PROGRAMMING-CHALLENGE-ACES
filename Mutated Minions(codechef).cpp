#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,count=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        a[i]=a[i]+k;
	    }
	     for(int i=0;i<n;i++)
	     {
	         if(a[i]%7==0)
	         {
	             count++;
	         }
	     }
	    cout<<count<<endl;
	}
	return 0;
}
