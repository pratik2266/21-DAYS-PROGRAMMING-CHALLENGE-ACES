#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while(t--){
   int a=0,b=0,c=0,d=0;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b>>c>>d;
        if(c%2==0){
            cout<<c/2<<endl;
        }
        else{
            if(b==d){
                    cout<<(c/2)<<endl;
            }
            else{
                cout<<(c/2)+1<<endl;
            }


        }
    }

}
}
