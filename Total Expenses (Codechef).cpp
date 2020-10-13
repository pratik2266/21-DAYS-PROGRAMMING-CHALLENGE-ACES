#include <iostream>
#include<cstdio>
using namespace std;

int main() {
    int T;
    cin>>T;
    double quan,price;
    while(T--)
    {
        cin>>quan>>price;
        if(quan < 1000)
        {
            double expense=quan*price;
            printf("%lf\n",expense);
        }
        else
        {
            double expense=0.90*quan*price;
            printf("%lf\n",expense);
        }
    }
	return 0;
}

