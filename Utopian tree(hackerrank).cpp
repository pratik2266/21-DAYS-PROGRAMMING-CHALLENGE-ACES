#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int h=1;
        int n;
        cin >> n;
        for(int j=0;j<n;j++)
            {
             if(j%2==0) 
             h=h*2;
             else 
             h=h+1;
            }
        cout<<h<<endl;
    }
    return 0;
}