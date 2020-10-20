#include <iostream>
using namespace std;

int main() {
	
	    int l,b;
	    cin>>l>>b;
	    int p,a;
	    
	    p=2*(l+b);
	    a=l*b;
	    if(p>a)
	    {
	       cout<<"Peri"<<endl;
	       cout<<p<<endl;
	    }
	    else if(p<a)
	    {
	        cout<<"Area"<<endl;
	       cout<<a<<endl; 
	    }
	    else
	    {
	         cout<<"Eq"<<endl;
	       cout<<p<<endl;
	    }
	
	return 0;
}
