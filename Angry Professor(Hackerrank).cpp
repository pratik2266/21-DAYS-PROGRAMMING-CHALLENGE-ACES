#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,a;
        cin>>n>>k;
        int count=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a<=0)
                count++;
            
        }
       
        if(count>=k)
        {
            cout<<"NO"<<endl;
        }
        else
        {
        cout<<"YES"<<endl;
        }
    }
    return 0;
}