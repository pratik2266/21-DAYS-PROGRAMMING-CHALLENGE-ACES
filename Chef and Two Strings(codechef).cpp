#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int max = 0;
        int min = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == '?' || s2[i] == '?')
                max += 1;
            else if (s1[i] != s2[i])
            {
                min += 1;
                max += 1;
            }
            else
                continue;
        }
        cout << min << " " << max << endl;
    }
    return 0;
}