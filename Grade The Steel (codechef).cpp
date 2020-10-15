#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h;
        cin>>h;
        float c;
        cin>>c;
        int t;
        cin>>t;
        
        if(h>50 && c<0.7 && t>5600)
        {
            cout<<"10"<<endl;
        }
        else if(h>50 && c<0.7)
        {
             cout<<"9"<<endl;
        }
        else if(c<0.7 && t>5600)
        {
            cout<<"8"<<endl;
        }
        else if(h>50 && t>5600)
        {
            cout<<"7"<<endl;
        }
        else if(h>50 || c<0.7 || t>5600)
        {
            cout<<"6"<<endl;
        }
        else
        {
            cout<<"5"<<endl;
        }
        
}
return 0;
}