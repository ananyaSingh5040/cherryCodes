#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abcabd";

    // pre-compute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetch
        cout << "Number of times " << c << " was seen is " << hash[c - 'a'] << endl;
    }
    return 0;
}