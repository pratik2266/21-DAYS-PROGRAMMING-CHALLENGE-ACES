#include <iostream>
using namespace std;

bool isPrime(int n) {
    int flag = 0;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n == 1)     
	return false;
    else {
        if (flag == 0)    
	return true;
        else    
	return false;
    }
}

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int x, y;
	    cin >> x >> y;
	    int k = x + y;
	    int z = 0;
	    do {
	        z++;
	    } while (!isPrime(k + z));
	    cout << z << endl;
	}
	return 0;
}
