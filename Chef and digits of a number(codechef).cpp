#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    string d;
	    cin>>d;
	    
	    int c1=0,c2=0;
	    for(int i=0;i<d.size();i++)
	    {
	        if(d[i]=='1')
	        {
	            c1++;
	        }
	        else
	        {
	            c2++;
	        }
	    }
	    
	    if(c1==1||c2==1)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
