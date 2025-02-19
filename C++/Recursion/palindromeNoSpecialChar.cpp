// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
string filterString(string s, string ans)
{
    for (int i = 0; i < s.size(); i++)
    {
        char n = s[i];
        if (n >= 'A' && n <= 'Z')
        {
            n = n + 32;
            ans.push_back(n);
        }
        else if (n >= 'a' && n <= 'z' || n >= '0' && n <= '9')
        {
            ans.push_back(n);
        }
        else
        {
            continue;
        }
    }
    return ans;
}
bool checkIfPalindrome(int i, string &ans)
{
    if (i >= ans.size() / 2)
        return true;
    if (ans[i] != ans[ans.size() - i - 1])
        return false;

    return checkIfPalindrome(i + 1, ans);
}

int main()
{
    string ans = filterString("121MADAM121#$", "");

    if (checkIfPalindrome(0, ans))
    {
        cout << "true";
    }
    else
    {
        cout << false;
    }

    return 0;
}