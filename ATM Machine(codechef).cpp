#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s="";
	    while(n--){
	        int m;
	        cin>>m;
	        if((k-m)>=0){
	            s=s+"1" ;
	            k=k-m;
	         }
	       else
	        s=s+"0";
	    }
	   cout<<s<<endl; 
	}
	return 0;
}
