#include <iostream>
using namespace std;

int main() {
	
	int t;
    cin>>t;
while(t--)
{
    int n;
    cin>>n;
	string s;
    cin>>s;
int ans=0;
for(int i=0;i<n;i++)
{
	if(s[i]=='I')
	{
	ans=1;
	break;
	}
	
	else if(s[i]=='Y')
	{
		ans=2;
		break;
	}
}
	if(ans==1)
	cout<<"INDIAN"<<endl;
	else if(ans==2)
	cout<<"NOT INDIAN"<<endl;
	else
	cout<<"NOT SURE"<<endl;

}
	return 0;
}
