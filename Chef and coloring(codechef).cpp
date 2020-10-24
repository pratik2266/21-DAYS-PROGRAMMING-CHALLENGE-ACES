#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n;
        cin>>n;
        string s;
        cin>>s;
         int r=0,b=0,g=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
                r++;
            else if(s[i]=='B')
                b++;
            else if(s[i]=='G')
                g++;
        }
        if(r>=b && r>=g)
            cout<<n-r<<endl;
        else if(g>=r && g>=b)
            cout<<n-g<<endl;
        else if(b>=r && b>=g)
            cout<<n-b<<endl;
    }

    return 0;
}
