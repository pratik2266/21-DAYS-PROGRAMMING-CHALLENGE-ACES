#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    int a1=0,a2=0,a3=0,a4=0,a5=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    
    if(a[i]==1){
        a1++;
    }
    else if(a[i]==2){
        a2++;
    }
     else if(a[i]==3){
        a3++;
    }
     else if(a[i]==4){
        a4++;
    }
    else{
        a5++;
    }
    }
    if(a1>=a2 && a1>=a3 && a1>=a4 && a1>=a5){
        cout<<"1"<<endl;
    }
    else if(a2>=a1 && a2>=a3 && a2>=a4 && a2>=a5){
        cout<<"2"<<endl;
    }
    else if(a3>=a2 && a3>=a1 && a3>=a4 && a3>=a5){
        cout<<"3"<<endl;
    }
    else if(a4>=a2 && a4>=a3 && a4>=a1 && a4>=a5){
        cout<<"4"<<endl;
    }
    else
    {
        cout<<"5"<<endl;
    }
return 0;
}