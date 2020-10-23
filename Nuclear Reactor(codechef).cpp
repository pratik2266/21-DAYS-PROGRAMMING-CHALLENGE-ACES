#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	 int A;
	int n,k;
	cin>>A>>n>>k;
	int a[k]={0};
	for(int i=1;i<=A;i++)
	{
		if(a[0]<n)
			a[0]++;
		else
		{
			a[0]=0;
			for(int j=1;j<k;j++)
			{
				if(a[j]==n)
					a[j]=0;
				else
				{
					a[j]++;
					break;
				}
			}
		}
	}
	for(int i=0; i<k; i++)
	    cout<<a[i]<<" ";
	  cout<<endl;
	return 0;
}
