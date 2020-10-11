#include<iostream>
using namespace std;
int sum(int);
int main(){
    int t,d,n;
    cin>>t;
    while(t--){
        cin>>d>>n;
        while(d--){
            n=sum(n);
        }
        cout<<n<<endl;
    }
    
    return 0;
}

int sum(int n){
    return n*(n+1)/2;
}