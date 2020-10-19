#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> h(26);
    for(int i = 0;i < 26;i++){
       cin >> h[i];
    }
    string word;
    cin >> word;
    
    int mx = 0;
    for(int j=0;j<word.size();j++)
        mx = max(mx, h[word[j]-'a']);
    
    cout << mx * word.size() << endl;
    return 0;
}
